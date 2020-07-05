/**
 * leet - convert string into 1337.
 * @s: string to convert
 * Return: s
 */
char *leet(char *s)
{
	int a, b;
	char ch[] = "A, a, E, e, O, o, T, t, L, l";
	char num[] = "4, 4, 3, 3, 0, 0, 7, 7, 1, 1";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; ch[b] != '\0'; b++)
		{
			if (s[a] == ch[b])
				s[a] = num[b];
		}
	}
	return (s);
}
