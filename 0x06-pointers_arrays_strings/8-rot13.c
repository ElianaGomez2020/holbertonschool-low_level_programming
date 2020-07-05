/**
 * rot13 - code a string to rot13.
 * @s: string to convert
 * Return: s
 */
char *rot13(char *s)
{
	int a, b;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; letter[b] != '\0'; b++)
		{
			if (s[a] == letter[b])
			{
				s[a] = rot13[b];
				break;
			}
		}
	}
	return (s);
}
