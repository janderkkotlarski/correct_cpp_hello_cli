#include <iostream>
#include <cassert>

/// main with command line input
int main(int argc, char *argv[])
{
    assert(argc > 0); /// Test whether argc is 1 or more.

    std::cout << "Hello";

    if (argc > 1)
    { std::cout << ' ' << argv[1]; }

    std::cout << '\n';
}
