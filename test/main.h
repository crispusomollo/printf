#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @p: pointer to print functions
 *
 * Description: struct to store pointers
 */
typedef struct print
{
        char *type_arg;
        int (*p)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);


#endif
