/**
  *swap_int - exhanging the values of tthe variables
  *@a : is  pointer  value is  98
  *@b : is  pointer  value is  42
  */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
