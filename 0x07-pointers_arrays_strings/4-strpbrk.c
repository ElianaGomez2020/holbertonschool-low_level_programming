/**
 *_strpbrk - locates first occurrence in string s of any of bytes string accept
 *@s: The string to be scanned
 *@accept: bytes to be find
 * Return: pointer to the byte or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int  a = 0;

	for ( ; s[a] !=  '\0'; a++)
	{
		int b = 0;

		for ( ; accept[b]; b++)
		{
			if (s[a] == accept[b] && s[a])
				return (s + a);
		}
	}
	return ('\0');
}
