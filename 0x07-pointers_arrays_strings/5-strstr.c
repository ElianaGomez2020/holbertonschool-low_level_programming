/**
 *_strstr - function finds the first occurrence of the substring
 *@haystack: pointer of array
 *@needle: pointer to sibstring
 *Return: pointer or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;

	for (; haystack[a] ; haystack++)
	{
		for (; haystack[a] && needle[a] && haystack[a] == needle[a]; a++)
		{
		}
		if (!needle[a])
		{
			return (haystack);
		}

	}
	return (0);
}
