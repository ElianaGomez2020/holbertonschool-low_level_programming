/**
 * string_toupper - reverses a string
 * @s: string.
 * Return: s
 */
char *string_toupper(char *s)
{
	int c = 0;

	for ( ; s[c] != '\0' ; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
	}
	return (s);
}
