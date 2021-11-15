#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream &out, const Data &data) {
    out << "int: " << data._i << std::endl;
    out << "char: " << data._c << std::endl;
    out << "float: " << (float) data._f << 'f' << std::endl;
    out << "double: " << data._d;

    return out;
}