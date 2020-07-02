/**
 * _pow_recursion - function that returns the value .
 * @x: value of parameter
 * @y: value of raised
 *
 * Return: the function
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y <= 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
