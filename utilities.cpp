#include "utilities.hpp"

namespace utilities {
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

    void output(const char* name, std::vector<int> array)
    {
        std::cout << name << ": {";
        for (int& el : array) {
            (&el == &array.back())
            ? std::cout << el
            : std::cout << el << ", ";
        }
        std::cout << "}" << std::endl;
    }

    std::vector<int> intVectorFromUserInput()
    {
        std::vector<int> array;
        int el;
        std::cout << "Enter integers. Use Ctrl + d to finish." << std::endl;
        while (std::cin >> el) {
            array.push_back(el);
        }
        return array;
    }
}
