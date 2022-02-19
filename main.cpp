#include <iostream>
#include <string>

char restart;
std::string name;

int main()
{
    //Intro with a newline as a way to press "enter"
    std::cout << "???: Welcome to Text Game Unlimited" << std::endl;
    std::cout << std::endl; 

    //Used a newline as a way to press "enter"
    std::cout << "???: Press Enter to Continue" << std::endl;
    while (std::cin.get()!= '\n'); 
    
    //Beginning of Loop
    do
    {
    //Clears stream buff to be able to restart loop from beginning without program skipping getline() input
    std::cin.ignore(256, '\n');
    std::cout << "???: Enter your name and press Enter to Continue" << std::endl;
    
    //Can enter both first and last name in one go
    std::getline(std::cin, name);
    std::cout << std::endl;

    //Asks you if name is correct and shows you name
    std::cout << "???: Is this correct? " << std::endl;
    std::cout << name << std::endl;
    std::cout << std::endl;

    //Typing any other letter but "n/N" continues the program, otherwise restarts the loop
    std::cout << "Y/N" << std::endl;
    std::cin >> restart;
     } while (restart == 'n' && 'N');
    
    std::cout << std::endl;
    std::cout << "???: Thank you, let us continue." << std::endl;

    std::cout << std::endl;
    while (std::cin.get()!= '\n');

    std::cout << "???: Your adventure starts off as a mere nobody.." << std::endl;
    while (std::cin.get()!= '\n');

    std::cout << "???Who later leaves their mark on time and space..." << std::endl;
    while (std::cin.get()!= '\n');

    std::cout << "???: In a Universe SHATTERING WAY!" << std::endl;
    while (std::cin.get()!= '\n');

    std::cout << "???: I will quickly go over the rules of combat." << std::endl;
    while (std::cin.get()!= '\n');
    
    return 0;
}