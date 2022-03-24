#include "printError.h"
#include "Replace.h"

int printError(int Error){
    switch (Error)
    {
        case ERROR_ARGS_NUM:
            std::cout << "Error numbers of args" << std::endl;
            break;
        case ERROR_EMPTY_FILE:
            std::cout << "Error, empty input file" << std::endl;
            break;    
        case ERROR_EMPTY_STR:
            std::cout << "Error, empty string" << std::endl;
            break;
        case ERROR_INPUT_STREAM:
            std::cout << "Error, input stream" << std::endl;
            break;
        case ERROR_OPEN_FILE:
            std::cout << "Error, open file" << std::endl;
            break;
        case ERROR_CREATE_FILE:
            std::cout << "Error, create file Filename.replce" << std::endl;
            break;
    }
    return (ERROR);
}