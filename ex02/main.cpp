#include <iostream>
#include <Array.hpp>
#include <stdlib.h>
#include <ctime>
#include <iomanip>

#define MAX_VAL 7//50
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    std::cout << "numbers size= " << numbers.size() << std::endl;
    std::cout << std::endl;
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    // {
        Array<int> tmp = numbers;
        numbers[5] = 5;
        tmp[6] = 6;
        const Array<int> test(tmp);
        test[0] = 0;
        tmp[6] = 66;
    // }
    std::cout << "(i) ";
    std::cout << std::setw(14) << std::right
            << "MIRROR";
    std::cout << std::setw(17) << std::right
            << "NUMBERS";
    std::cout << std::setw(17) << std::right
            << "TMP";
    std::cout << std::setw(17) << std::right
            << "TEST" << std::endl;
    std::cout << "---------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "(" << i << ") ";
        std::cout << std::setw(14) << std::right
                << mirror[i] << " ; ";
        std::cout << std::setw(14) << std::right
                << numbers[i] << " ; ";
        std::cout << std::setw(14) << std::right
                << tmp[i] << " ; ";
        std::cout << std::setw(14) << std::right
                << test[i] << std::endl;
        // if (mirror[i] != numbers[i])
        // {
        //     std::cerr << "didn't save the same value!!" << std::endl;
        //     return 1;
        // }
    }

    std::cout << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    std::cout << std::endl;
    Array<int>  nothing;
    std::cout << "nothing size= " << nothing.size() << std::endl;
    try
    {
        std::cout << "nothing[0]= " << nothing[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    delete [] mirror;//
    return 0;
}