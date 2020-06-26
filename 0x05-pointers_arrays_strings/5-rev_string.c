/**
 *rev_string -  prints a string in reverse
 *@s: is the pointer
 *Return: 0
 */
void rev_string(char *s)
{
	int a, b, c;

	for (a = 0 ; a[s] != '\0' ; a++)
	{
	}
	a = a - 1;
	for (b = 0 ; a > b ; a--)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;

		b++;
	}
}
