#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <string>
#include <fstream>

class Replace{
    private:
        std::string _fileName;
        std::string _replaceStr;
        std::string _replacedStr;
        std::ifstream _fileIn;
        std::ofstream _fileOut;
        std::string _fileContent;
        std::string _outFinalStr;
    public:
        Replace();
        ~Replace();
        int OpenCreateAndWrite(std::string &file);
        int OpenFile(void);
        int CreateFile(void);
        void WriteFile(std::string str, std::ofstream fileOut);
        void setFileName(std::string fileName);
        std::string getFileName(void);
        bool setContentFile(void);
        bool replace(std::string replaceStr, std::string replacedStr);
        std::string getFileContent(void);
        std::string getOutFinalStr(void);
        void setOutFinalStr(std::string str);
        bool finalWriteToFile();
};

#endif