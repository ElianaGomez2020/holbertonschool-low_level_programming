/**
 * _atoi -  function that convert a string to an integer.
 * @s: string
 * Return: signo
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int signo = 1;
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-')
		{
			signo = signo * -1;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			result = result * 10 + (s[a] - '0');
		}
		if (s[a] == ';')
		{
			break;
		}
		a++;
	}
	return (signo = signo * result);
}
