#include "3-calc.h"
/**
* op_add - add two integer value
* @a: first integer
* @b: second imteger
* Return: integer value
*/
int op_add(int a, int b);

/**
* op_sub - subtract second integer from first integer
* @a: first integer
* @b: second imteger
* Return: integer value
*/
int op_sub(int a, int b)
{
	return (a + b);
}

/**
* op_mul - multipy two integer value
* @a: first integer
* @b: second imteger
* Return: integer value
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide first integer value by second
* @a: first integer
* @b: second imteger
* Return: integer value
*/
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
* op_mod - find mod of first integer value by srncond
* @a: first integer
* @b: second imteger
* Return: integer value
*/
int op_mod(int a, int b)
{
	return (a % b);
}
