#include "Convert.hpp"

int main(int argc, char **argv) {
    if (argc != 2){
        std::cout << "invalid count of arguments" << std::endl;
        return (1);
    }
    std::string str1 = argv[1];
    Convert f(str1);
    f.convert(); 
}
