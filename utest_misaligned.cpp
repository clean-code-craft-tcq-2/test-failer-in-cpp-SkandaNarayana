#include "misaligned.h"
#include <cassert>

void test_addNecessarySpacing()
{
    std::string outputString = addNecessarySpacing("Red", 5);
    assert(outputString.size() == 8);
    assert(outputString[-2] = '|');
}

void test_getMaxLengthOfString(){
    std::string majorColourTestList[] = {"Magenta", "Cyan", "Grey", "Orange", "Purple"};
    size_t lengthOfLongest = getMaxLengthOfString(majorColourTestList);
    assert(lengthOfLongest == 7);
}

int main() {
    printColorMap();
    test_addNecessarySpacing();
    test_getMaxLengthOfString();
    std::cout << "All is well (maybe!)\n";
    return 0;
}

