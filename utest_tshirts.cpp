#include "tshirts.h"
#include <cassert>

int main() {
    assert(size(37) == small);
    assert(size(40) == medium);
    assert(size(43) == large);
    assert(size(38) == small);
    assert(size(42) == large);
    assert(size(42) == large);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
