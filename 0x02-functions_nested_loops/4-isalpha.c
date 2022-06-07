/**
 * _isalpha - Returns 1 for alphabet and 0 otherwise
 * @c: - takes in the character
 * Return: 1 correct 0 wrong
 **/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		if (c <= 'Z' || c >= 'a')
			return (1);
		else
			return (0);
	else
		return (0);
}
