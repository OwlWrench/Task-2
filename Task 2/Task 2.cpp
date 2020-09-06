#include <iostream>
#include <string>

std::string name;
int age;
bool coffee;

int main()
{
    std::cout << "Whats your name? ";
    std::getline(std::cin, name);
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "Do you drink coffee? ";
    std::cin >> coffee;

    std::cout << "Your name is " << name << "\n";
    std::cout << "You are " << age << " years old\n";
    if (coffee == 1)
    {
        std::cout << "And you seem to like coffee";
    }
    if (coffee == 0)
    {
        std::cout << "And you seem to not be a coffee drinker";
    }

}

