#include <iostream>
const std::string hello = "Hello, ";

int main(int argc, char *argv[]) {
    std::string greater;
    std::cout << "What is your name?" << std::endl;
    getline (std::cin, greater);
    std::cout << hello + greater + "!" << std::endl;
    return 0;
}
