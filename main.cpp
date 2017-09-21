#include <iostream>
std::string printArguments(char *argv[], int argc);

int main(int argc, char *argv[]) {
    std::string greater = "Hello, ";
    if(argc > 1){
        greater += printArguments(argv, argc);
    } else  greater += " World!";
    std::cout << greater << std::endl;
    return 0;
}

std::string printArguments(char *argv[], int argc){
    std::string arguments = "";
    for(int i = 1; i< argc; i++){
        arguments += argv[i];
        arguments += " ";
    }
    return arguments + "!";
}