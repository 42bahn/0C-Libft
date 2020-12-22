char	*ft_strchr(char *str, int c)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		else
		{
			ptr++;
		}
	}
	if (*ptr == '\0')
	{
		return (0);
	}
}
