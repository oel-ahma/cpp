#ifndef _CONVERT_HPP_
#define _CONVERT_HPP_

#include <iostream>
#include <string>
#include <cstring>

#define ISCHAR 0
#define ISINT 1
#define ISDOUBLE 2
#define ISFLOAT 3
#define ERROR -1

class Convert
{
    private:
        std::string _str;
        int _type;
        bool _displayable;
        bool _undefined;
        bool _undefined_f;
        int _int;
        float _float;
        char _char;
        double _double;

    public:
        explicit Convert(const std::string str);
        Convert(const Convert &other);
        virtual ~Convert(void);
        Convert &operator=(const Convert &other);

        int getType(void) const;
        int getInt(void) const;
        float getFloat(void) const;
        double getDouble(void) const;
        char getChar(void) const;
        bool getDisplay(void) const;
        bool getUndefined(void) const;
        void parsing(void);
        void converter(void);
        void toInt(void);
        void toFloat(void);
        void toDouble(void);
        void toChar(void);
};

std::ostream &operator<<(std::ostream &out, const Convert &convert);

#endif