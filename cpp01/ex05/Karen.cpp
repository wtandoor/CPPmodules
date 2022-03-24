#include "Karen.h"

Karen::Karen(){
    arr[0] = &Karen::debug;
    arr[1] = &Karen::info;
    arr[2] = &Karen::warning;
    arr[3] = &Karen::error;
}

Karen::~Karen(){

}

void Karen::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Karen::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level){
    std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++){
        if (!lvls[i].compare(level)){
            (this->*(arr[i]))();
            return ;
        }
    }
    std::cout << "Error complain" << std::endl;
}