#include "Convert.hpp"

Convert::Convert() : dot(0), count(0), floa(0) , arg("") {

}

Convert::~Convert() {

}

Convert::Convert(std::string arg) : dot(0), count(0), floa(0){
    this->arg = arg;
}

Convert::Convert(const Convert & copy){
    (*this) = copy;
}

Convert & Convert::operator= (const Convert & right) {
    this->dot = right.dot;
    this->count = right.count;
    this->floa = right.floa;
    this->arg = right.arg;
    return (*this);
}

void Convert::convert(){
    if (arg.size() == 1 && isalpha(arg[0])){
        std::cout << "char: '" << arg << "'" << std::endl;
        int a = (int)arg[0];
        std::cout << "int: " << a << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(a) << std::endl;
    } else if (!arg.compare("nan") || !arg.compare("+inff") || !arg.compare("-inff") || !arg.compare("+inf") || !arg.compare("-inf") || !arg.compare("nanf")){
        std::cout << "char: " << "inpossible" << std::endl;
        std::cout << "int: " << "inpossible" << std::endl;
        if (!arg.compare("nan") || !arg.compare("+inf") || !arg.compare("-inf")){
            std::cout << "float: " << arg << "f" << std::endl;
            std::cout << "double: " << arg << std::endl;
        } else {
            std::cout << "float: " << arg << std::endl;
            std::cout << "double: " << arg.erase(arg.size() - 1) << std::endl;
        }
    } else if (isAlNumeric(arg)){
        int numi = std::stoi(arg);
        if (!isprint(numi)){
            std::cout << "char: is not printable" << std::endl;
        } else {
            std::cout << "char: " << static_cast<char>(numi) << std::endl;
        }
        std::cout << "int: " << numi << std::endl;
        if (this->dot){
            float numf = std::stof(arg);
            std::cout << "float: " << std::fixed << std::setprecision(count - dot - 1 - floa) << static_cast<float>(numf) << "f" << std::endl;
            double numd = std::stod(arg);
            std::cout << "double: " << static_cast<double>(numd) << std::endl;
        } else {
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(numi) << "f" << std::endl;
            std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(numi) << std::endl;   
        }
    } else{
        std::cout << "invalid arguments" << std::endl;
    }
}

int Convert::isAlNumeric(std::string arg){
    while (arg[count]){
        if (isdigit(arg[count]) || arg[count] == '.' || arg[count] == 'f' || arg[count] == '+' || arg[count] == '-'){
            if (arg[count] == '.'){
                this->dot = count;
            }
            if (arg[count] == 'f'){
                this->floa = 1;
            }
            count++;
        } else {
            break;
        }
    }
    if ((size_t(count) == arg.size()))
        return (1);
    else
        return (0);
}
