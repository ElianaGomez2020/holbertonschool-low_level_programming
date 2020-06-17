#include "holberton.h"
/**
  *_isalpha - chek alphabetic character
  *@c: string
  *Return: 1 if c lowercase, 0 of otherwise
  */
int _isalpha(int c)
{
	int result = 0;
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (c == i)
		{
			result = 1;
		}
	}
	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (c == i)
		{
			result = 1;
		}
	}
	return (result);

}
