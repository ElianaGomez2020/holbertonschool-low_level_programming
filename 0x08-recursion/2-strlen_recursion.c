/**
 *_strlen_recursion - is the functio
 * @s: is the string
 *
 * Return: a
 */
int _strlen_recursion(char *s)
{
	int a;

	a = 0;

	if (*s)
	{
		a = _strlen_recursion(s + 1);
		a++;
	}
	return (a);
}
