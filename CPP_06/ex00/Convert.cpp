#include "Convert.hpp"

Convert::Convert(std::string str) : _str(str), _type(-1), _displayable(true), _undefined(false), _undefined_f(false)
{
    parsing();
    converter();
};

Convert::~Convert(void)
{
};

Convert::Convert(Convert const &other) : _str(other._str), _type(other._type),
 _displayable(other._displayable), _int(other._int), _float(other._float), _char(other._char),
_double(other._double), _undefined(other._undefined), _undefined_f(other._undefined_f)
{}

Convert &Convert::operator=(Convert const &other)
{
    this->_double = other._double;
    this->_float = other._float;
    this->_int = other._int;
    this->_str = other._str;
    this->_char = other._char;
    this->_undefined = other._undefined;
    this->_undefined_f = other._undefined_f;
    this->_type = other._type;
    this->_displayable = other._displayable;
    
    return (*this);
}

void Convert::parsing(void)
{
    size_t length = this->_str.length();
    char *cstr = new char[length + 1];
    std::strcpy(cstr, this->_str.c_str());

    if (!this->_str.compare("nan") || !this->_str.compare("-inf") || !this->_str.compare("+inf") || !this->_str.compare("inf"))
    {
        this->_undefined = true;
        this->_double = atof(cstr);
        this->_type = ISDOUBLE;
    }
    if (!this->_str.compare("nanf") || !this->_str.compare("-inff") || !this->_str.compare("+inff") || !this->_str.compare("inf"))
    {
        this->_undefined_f = true;
        this->_float = atof(cstr);
        this->_type = ISFLOAT;
    }
    if (length == 1 && !std::isdigit(cstr[0]))
    {
        this->_char = cstr[0];
        this->_type = ISCHAR;
        return;
    }
    size_t i = -1;
    if (cstr[0] == '-')
        i++;
    while (std::isdigit(cstr[++i]));
    if (i == 0)
        return;
    if (i == length)
    {
        this->_int = atoi(cstr);
        this->_type = ISINT;
        return;
    }
    if (cstr[i] == '.')
    {
        size_t j = i;
        while (std::isdigit(cstr[++j]));
        if (j == length)
        {
            this->_double = atof(cstr);
            this->_type = ISDOUBLE;
            return;
        }
        else
        {
            if (cstr[j] == 'f' && j == length - 1)
            {
                this->_float = atof(cstr);
                this->_type = ISFLOAT;
            }
            return;
        }
    }
    if (cstr[i] == 'f')
    {
        if (i == length - 1)
        {
            this->_float = atof(cstr);
            this->_type = ISFLOAT;
        }
        return;
    }
    delete[] cstr;
}

int Convert::getType(void) const
{
    return this->_type;
}

void Convert::converter(void)
{
    switch (this->_type)
    {
        case ISINT:
                this->toInt();
                break;
        case ISCHAR:
                this->toChar();
                break;
        case ISFLOAT:
                this->toFloat();
                break;
        case ISDOUBLE:
                this->toDouble();
                break;        
    }
}

void Convert::toInt(void)
{
    this->_double = static_cast<double>(this->_int);
    this->_float = static_cast<float>(this->_int);
    this->_char = static_cast<char>(this->_int);
    if (this->_char <= 32 || this->_char >= 127)
        this->_displayable = false;
}

void Convert::toChar(void)
{
    this->_double = static_cast<double>(this->_char);
    this->_int = static_cast<int>(this->_char);
    this->_float = static_cast<float>(this->_char);
}

void Convert::toFloat(void)
{
    this->_double = static_cast<double>(this->_float);
    this->_int = static_cast<int>(this->_float);
    this->_char = static_cast<char>(this->_float);
    if (this->_char <= 32 || this->_char >= 127)
        this->_displayable = false;

}

void Convert::toDouble(void)
{
    this->_int = static_cast<int>(this->_double);
    this->_float = static_cast<float>(this->_double);
    this->_char = static_cast<char>(this->_double);
    if (this->_char <= 32 || this->_char >= 127)
        this->_displayable = false;
}

int Convert::getInt(void) const
{
    return this->_int;
}

float Convert::getFloat(void) const
{
    return this->_float;
}

double Convert::getDouble(void) const
{
    return this->_double;
}

char Convert::getChar(void) const
{
    return this->_char;
}

bool Convert::getDisplay(void) const
{
    return this->_displayable;
}

bool Convert::getUndefined(void) const
{
    return (this->_undefined || this->_undefined_f);
} 

std::ostream &operator<<(std::ostream &out, const Convert &convert)
{
    if (convert.getType() == ERROR)
        return out << "Error Wrong Input." << std::endl;
    out << "char: "; 
    if (convert.getDisplay())
        out << "'" << convert.getChar() << "'";   
    else if (convert.getUndefined())
        out << "impossible";
    else
        out << "Non displayable";
    out << std::endl << "int: ";
    if (convert.getUndefined())
        out << "impossible" << std::endl;
    else
        out << convert.getInt() << std::endl;
    if (!convert.getUndefined() && convert.getType() != ISDOUBLE && convert.getType() != ISFLOAT)
    {
        out << "float: " << convert.getFloat() << ".0f" << std::endl
        << "double: " << convert.getDouble() << ".0" << std::endl;
    }
    else
    {
        out << "float: " << convert.getFloat() << "f" << std::endl
        << "double: " << convert.getDouble() << std::endl;
    }
    return out;
};