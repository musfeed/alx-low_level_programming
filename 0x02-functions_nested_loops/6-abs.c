/**
 * _abs - changes a value to its absolute value
 * @n: The value to change to absolute value
 * Return: returns 0 or 1
 **/
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else if (n == 0)
		return (0);
	else
		return (n);
}
