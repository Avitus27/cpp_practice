#include <type_traits>
#include <iostream>

int main(){
    int a = 5, b = 10;
    std::swap(a, b);

    // Outputs: a=10, b=5
    std::cout << "a=" << a << ", b=" << b;
}