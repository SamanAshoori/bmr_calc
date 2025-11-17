#include <iostream>

int main()
{
    std::string name;
    int age;
    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "Hello " << name;

    std::cout << "What's your age: ";
    std::cin >> age;

    return 0;
}