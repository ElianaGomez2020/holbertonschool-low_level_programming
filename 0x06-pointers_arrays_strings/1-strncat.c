/**
 *_strncat- Concatenates two strings up to n bytes of src
 *@dest: string dest
 *@src: strind appends
 *@n: number of bytes of src to be concatenated.
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
