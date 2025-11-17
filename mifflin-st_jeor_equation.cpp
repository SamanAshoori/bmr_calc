#include <iostream>

int main()
{
    //Variable declaration
    std::string name;
    std::string sex;
    int age;
    int height;
    int weight;
    int activity_factor;
    int bmr;

    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "What's your Sex (M or F)?: ";
    std::cin >> sex;

    std::cout << "Hello " << name << '\n';

    std::cout << "What's your age: ";
    std::cin >> age;
    std::cout << "What's your height in cm: ";
    std::cin >> height;
    std::cout << "What's your weight in kg: ";
    std::cin >> weight;
    std::cout << "On a scale from 1-5 how active are you: ";
    std::cin >> activity_factor;

    if (sex = 'm' || sex = 'M')
    {
        bmr = (10 * weight) + (6.25*height) - (5*age) + 5;
    }
    else{
        bmr = (10 * weight) + (6.25*height) - (5*age) - 161;
    }

    switch (activity_factor)
    {
    case 1:
        bmr = bmr * 1.2;
        break;
    
    case 2:
        bmr = bmr * 1.375;
        break;
    case 3:
        bmr = bmr * 1.55;
        break;
    case 4:
        bmr = bmr * 1.725;
        break;
    case 5:
        bmr = bmr * 1.9;
        break;
    
    default:
        break;
    }
 
    std::cout << "Your BMR is " << bmr;
    return 0;
}