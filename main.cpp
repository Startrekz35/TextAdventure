#include <iostream>
#include <string>

char restart;
std::string name;

int main()
{
    std::cout << "Welcome to Text Game Unlimited" << std::endl;
    std::cout << std::endl;

    std::cout << "Press Enter to Continue" << std::endl;
    while (std::cin.get()!= '\n'); //Used a newline as a way to press "enter"
    
    
    do //Beginning of Loop
    {
    std::cin.ignore(256, '\n'); //Clears stream buff to be able to restart loop from beginning without program skipping getline() input
    std::cout << "Enter your name and press Enter to Continue" << std::endl;
    std::getline(std::cin, name); //Can enter both first and last name
    std::cout << std::endl;

    std::cout << "Is this correct? " << std::endl;
    std::cout << name << std::endl;
    std::cout << std::endl;

    std::cout << "Y/N" << std::endl;
    std::cin >> restart;
     } while (restart == 'n' && 'N'); // Restarts loop if not correct
    
    std::cout << std::endl;
    std::cout << "Thank you, let us continue." << std::endl;

    return 0;
}