#include "Replace.h"
#include "printError.h"

Replace::Replace(){

}

Replace::~Replace(){

}

void Replace::setFileName(std::string filename){
    this->_fileName = filename;
}

std::string Replace::getFileName(void){
    return this->_fileName;
}

std::string Replace::getOutFinalStr(void){
    return this->_outFinalStr;
}

void Replace::setOutFinalStr(std::string str){
    this->_outFinalStr = str;
}

int Replace::OpenCreateAndWrite(std::string &file){
    setFileName(file);
    if (OpenFile())
        return(ERROR);
    else{
        if (!setContentFile())
            return(ERROR);
    }
    return 0;
}

int Replace::OpenFile(){
    std::string file = getFileName();
    _fileIn.open(file);
    if (!_fileIn.is_open())
        return (printError(ERROR_OPEN_FILE));
    else
        return (0);
}

bool Replace::setContentFile(void){
    std::string tempStrContent;
    std::string buffStr;
    if (!_fileIn){
        printError(ERROR_INPUT_STREAM);
        return (false);
    }
    while (std::getline(_fileIn, buffStr))
    {
        tempStrContent += buffStr;
        if (!_fileIn.eof())
            tempStrContent += "\n";
    }
    if (tempStrContent.length() == 0){
        printError(ERROR_EMPTY_FILE);
        return (false);
    }
    _fileIn.close();
    _fileContent = tempStrContent;
    return (true);
}

std::string Replace::getFileContent(void){
    return(_fileContent);
}

bool Replace::replace(std::string replaceStr, std::string replacedStr){
    std::string tempStr;
    size_t lenReplace = replaceStr.length();
    if (replaceStr.empty() ||  replacedStr.empty()){
        printError(ERROR_EMPTY_STR);
        return (false);
    }
    tempStr = getFileContent();
    for(size_t len = 0; len < tempStr.length(); len++){
        if (tempStr.compare(len, lenReplace, replaceStr) == 0){
            tempStr.erase(len, lenReplace);
            tempStr.insert(len, replacedStr);
            len += replacedStr.length() - 1;
        }
    }
    setOutFinalStr(tempStr);
    return (false);
}

bool Replace::finalWriteToFile(){
    std::string strOut = getOutFinalStr();
    _fileOut.open(_fileName + ".replace", std::ios::out);
    if (_fileOut.fail()){
        printError(ERROR_CREATE_FILE);
        return (true);
    }
    _fileOut << strOut;
    _fileOut.close();
    return (false);
}