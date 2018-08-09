#include <iostream>
#include <locale>
#include <algorithm>

int checkCommandLineArgs(int argc, char **argv) {
    if(argc > 1) {
        std::string value = argv[1];
        std::transform(value.begin(), value.end(), std::toupper);
        if(value == std::string("TRUE")) {
            return 0;
        }
        else {
            return 1;
        }
    }
    
    return 0;
}

int main(int argc, char **argv) {
    std::cout << "Hello World" << std::endl;
    return checkCommandLineArgs(argc, argv);
}
