#include <iostream>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << "\n";
    }
    if (true)
    {
        std::cout << "Will reach this code\n";
    }
    else
    {
        std::cout << "Never reaches this one\n";
    }

    if (true || false)
    {
        std::cout << "OR Operator\n";
    }
    if (true && false)
    {
        std::cout << "AND Operator\n";
    }

    int a = 10;
    if (a > 5)
    {
        std::cout << "a is greater than 5\n";
    }
    else
    {
        std::cout << "a is less than or equal 5\n";
    }
    std::cout << "===\n";
    if (a < 5)
    {
        std::cout << "a is less than 5\n";
    }
    else if (a < 10)
    {
        std::cout << "a is less than 10 but more than or equal to 5\n";
    }
    else
    {
        std::cout << "a is greater than or equal to 10\n";
    }
    switch (a)
    {
    case 9:
        std::cout << "a = 9\n";
        break;
    case 10:
        std::cout << "a = 10\n";
        break;
    default:
        std::cout << "a != 9 && a != 10\n";
    }

    int i = 1;
    do {
        std::cout << i << "\n";
        i++;
    }
    while (i < 6);
}
