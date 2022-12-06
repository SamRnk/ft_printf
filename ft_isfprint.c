int	ft_isfprint(const char c)
{
	if (c == 'c' || c == 's' || c == 'i' || c == 'u' ||
		c == 'x' || c == 'X')
		return (1);
	return (0);
}
