#include "Data.hpp"

int main() {

    Data *data = new Data(42, '*', 42.05f, 42.5);
    uintptr_t _raw = serialize(data);

    std::cout << _raw << std::endl;

    Data *other = deserialize(_raw);
    std::cout << *other << std::endl;
    
    delete data;
    return (0);
}