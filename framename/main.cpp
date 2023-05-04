#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "input your name : ";
    std::cin >> name;

    const std::string greeting = "Hello, " + name+ "!";
    const std::string firstLine(greeting.size(), '*');
    const std::string secondLine = "*" + std::string(greeting.size() + 4, ' ') + " *";
    std::cout << firstLine << std::endl;
    std::cout << secondLine << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << firstLine << std::endl;
   return 0;
}
