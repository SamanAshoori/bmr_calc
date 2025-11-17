#include <iostream>

int main()
{
    std::string name;
    int age;
    int height;
    int weight;
    int activity_factor;

    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "Hello " << name << '\n';

    std::cout << "What's your age: ";
    std::cin >> age;

    return 0;
}