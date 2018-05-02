#include "utilities.hpp"
#include "quicksort.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> array = utilities::intVectorFromUserInput();
    utilities::output("Starting array", array);
    quickSort(array);
    utilities::output("Quick-Sorted array", array);
    return 0;
}
