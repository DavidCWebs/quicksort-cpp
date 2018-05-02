#ifndef UTILITIES_H
#define UTILITIES_H
#include <iostream>
#include <vector>

namespace utilities {
    void swap(int *xp, int *yp);
    void output(const char* name, std::vector<int> array);
    std::vector<int> intVectorFromUserInput();
}

#endif
