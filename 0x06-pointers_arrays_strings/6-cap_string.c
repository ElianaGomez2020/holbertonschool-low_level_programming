/**
 * cap_string -  capitalizes all words of a string.
 * @s: string
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	int a;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ',' || s[a] == '.' || s[a] == '!'
				|| s[a] == '"' || s[a] == '(' || s[a] == ')'
				|| s[a] == '{' || s[a] == '}' || s[a] == ' '
				|| s[a] == '\t' || s[a] == '\n')
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
	}
	return (s);
}
