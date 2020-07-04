/**
 * reverse_array - reverse an array.
 * @a: array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	c = n - 1;
	n = n / 2;
	for (b = 0; b < n; b++, c--)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
	}
}
