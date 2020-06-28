/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to be filled
 * @src: memory area to be filled
 * @n: number of times to copy b
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
