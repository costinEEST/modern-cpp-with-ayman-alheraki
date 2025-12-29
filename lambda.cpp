#include <iostream>
int main()
{
    auto printMessage = []() { std::cout << "Hello, World!" << std::endl; };
    printMessage();
    return 0;
}