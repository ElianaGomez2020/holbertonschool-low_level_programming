/**
 *_strcat - function appends the src string to the dest string
 *@dest: string dest
 *@src: strind appends
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
