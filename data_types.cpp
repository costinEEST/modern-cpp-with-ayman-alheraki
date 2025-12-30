#include <iostream>
int main()
{
    // Declare and initialize variables
    int age = 25;
    double height = 5.9;
    bool isStudent = true;
    // Use auto to deduce types
    auto weight = 68.5;  // double
    auto name = "Alice"; // const char*
    // Print the values
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Is Student: " << isStudent << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Name: " << name << std::endl;
    return 0;
}