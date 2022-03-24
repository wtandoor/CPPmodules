#include "Replace.h"
#include "printError.h"

int main(int argc, char **argv)
{
    Replace replace;
    std::string filename;
    std::string replaceStr;
    std::string replacedStr;
    if (argc != 4)
    {
        printError(ERROR_ARGS_NUM);
        return (ERROR);
    }
    else
    {
        filename = argv[1];
        replaceStr = argv[2];
        replacedStr = argv[3];
        if (replace.OpenCreateAndWrite(filename))
            return (ERROR);
        if (replace.replace(replaceStr, replacedStr))
            return (ERROR);
        if (replace.finalWriteToFile())
            return(ERROR);
    }
}