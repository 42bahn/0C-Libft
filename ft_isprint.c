int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (c);
	else
		return (0);
}
