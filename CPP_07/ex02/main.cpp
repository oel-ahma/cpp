#include "Array.hpp"
#include <string>

int main()
{
    Array<int> arr;
    try {
        arr[0] = 10;
    }
    catch (std::exception &e)
    {
        std::cout << "Out Of Range." << std::endl;
    }

    Array<float> float_arr(10);
    int size = float_arr.size();
    for (int i = 0; i < size; ++i)
        float_arr[i] = static_cast<float>(i);
    std::cout << float_arr << std::endl;

    Array<std::string> str_arr(5);
    str_arr[0] = "The ";
    str_arr[1] = "Stage ";
    str_arr[2] = "Is ";
    str_arr[3] = "Set";
    str_arr[4] = "!";
    std::cout << str_arr << std::endl;
    try
    {
        str_arr[22] = "Oups!";
        std::cout << str_arr << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Out Of Range." << std::endl;
    }
    return 0;
}