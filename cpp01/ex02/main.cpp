#include <iostream>
#include <string>

int main(void){
    std::string s;
    s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;
    std::cout << "address in memory of the string " << &s << std::endl;
    std::cout << "address in memory of the stringPTR " << stringPTR << std::endl;
    std::cout << "address in memory of the stringREF " << &stringREF << std::endl;
    std::cout << "stringPTR " << *stringPTR << std::endl;
    std::cout << "stringREF " << stringREF << std::endl;
}
