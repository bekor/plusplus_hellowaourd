#include <iostream>
const std::string hello = "Hello, ";

int main(int argc, char *argv[]) {
    std::string greater;
    if(argc > 1){
        for(int i = 1; i< argc; i++){
            greater += hello + argv[i] + "!\n";
        }
    } else  greater += hello + " World!";
    std::cout << greater << std::endl;
    return 0;
}
