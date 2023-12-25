#include "3-calc.h"
/**
* get_op_func - get the right function operator
* @s: char representing operator
* Return: operation result (integer)
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	opt_t ops[] = {
		{"+", opt_add},
		{"-", opt_sub},
		{"*", opt_mul},
		{"/", opt_div},
		{"%", opt_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
