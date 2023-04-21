#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - This function returns a pointer,
 * to a function.
 * @s: This argument is the value to be checked.
 *
 * Return: A pointer to a function is returned or
 * NULL if s is not correct.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
