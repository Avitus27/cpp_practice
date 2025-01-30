#include <iostream>
int main()
{
    int i = 1;
    int &ri = i; // ri is a reference to i

    ri = 2; // i is now changed to 2
    std::cout << "i=" << i << "\n";

    i = 3; // i is now changed to 3
    std::cout << "ri=" << ri;
}
// ri and i refer to the same memory location.
