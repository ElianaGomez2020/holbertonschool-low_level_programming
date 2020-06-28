/**
 *_memset - is a funtion fills memory with a constant byte
 * @s: adress memory area to be filled
 * @b: char to filled
 * @n: number of times to copy b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
