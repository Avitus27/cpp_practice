#include <iostream>
namespace ns1
{
    int val() { return 5; }
}
int main()
{
    std::cout << ns1::val();
}
