/**
 *_strchr - searches for the first occurrence of the character c
 * @s: memory area to be filled
 * @c: char to copy
 * Return:  s
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0' ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);
	return (s);

}
