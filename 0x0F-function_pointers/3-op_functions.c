#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the addition of two numbers
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the different of two numbers
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the sum of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two numbers
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of two numbers
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remaider of the division
 * @a: the first number
 * @b: the second numb
 *
 * Return: the remiander number.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
