#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>

/**
 *  * struct print - structure for printing various types
 *   * @t: type to print
 *    * @f: function to print
 *     */
typedef struct print
{
		char *t;
			int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_add(va_list add);
int print_less(va_list less);
int print_space(va_list space);
int print_sharp(va_list sharp);

#endif  /* _MAIN_H */
