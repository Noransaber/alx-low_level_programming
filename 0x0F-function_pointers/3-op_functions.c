#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
* op_add - Returns the sum of two numbers.
* @a: The first number.
* @b: The sec number.
*
* Return: The add of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Returns the sub of two numbers.
* @a: The first number.
* @b: The sec number.
*
* Return: The sub of a and b.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Returns the mul of two numbers.
* @a: The first number.
* @b: The sec number.
*
* Return: The mul of a and b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Returns the div of two numbers.
* @a: The first number.
* @b: The sec number.
*
* Return: The div of a and b.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Returns the mod of two numbers.
* @a: The first number.
* @b: The sec number.
*
* Return: The mod of a and b.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
