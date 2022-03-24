#ifndef PRINTERROR_H
#define PRINTERROR_H

#include "Replace.h"

typedef enum
{
    ERROR = 1,
    ERROR_ARGS_NUM,
    ERROR_OPEN_FILE,
    ERROR_CREATE_FILE,
    ERROR_INPUT_STREAM,
    ERROR_EMPTY_STR,
    ERROR_EMPTY_FILE
} n_err;

int printError(int Error);

#endif