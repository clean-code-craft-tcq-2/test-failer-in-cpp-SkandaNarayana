#include "tshirts.h"
#include <cassert>

int main()
{
    assert(size(37) == Small);
    assert(size(38) == Small);
    assert(size(40) == Medium);
    assert(size(43) == Large);
    assert(size(42) == Large);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
