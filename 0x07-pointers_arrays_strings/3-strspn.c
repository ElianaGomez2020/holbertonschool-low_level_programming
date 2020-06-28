/**
 *_strspn - gets the length of a prefix substring
 * @s: input string to search in
 * @accept: characters
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0' ; a++)
	{
		for (b = 0; accept[b] != s[a] ; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (a);
}
