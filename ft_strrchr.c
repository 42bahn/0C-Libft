char	*ft_strrchr(char *str, int c)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	while (len >= 0)
	{
		if (*str == c)
		{
			return (str);
		}
		str--;
		len--;
	}

	return (0);
}
