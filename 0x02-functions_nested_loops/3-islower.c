#include "holberton.h"
/**
  *_islower - chek lowercase character
  *@c: string
  *Return: 1 if c lowercase, 0 of otherwise
  */
int _islower(int c)
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
	return (result);

}
