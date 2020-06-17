#include "holberton.h"
/**
  *print_last_digit - print the last digit.
  *@i: int
  *Return:0
  */
int print_last_digit(int i)
{

	int num;

	num = i % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar (num + '0');
	return (num);
}
