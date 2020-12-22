char	*ft_strnstr(char *dest, char *src, unsigned int size)
{
	unsigned int 	i;
	unsigned int 	j;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
	{
		j = 0;
		if (dest[i] == src[j])
		{
			while (dest[i + j] == src[j] && src[j] != '\0')
			{
				j++;
				
			}
			if (src[j] == '\0')
				return (&dest[i]);
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char dest[] = "Manner Maketh Man.";
	char src[] = "Maketh";
	printf("%s\n", ft_strnstr(dest, src, 3));
	printf("%p\n", ft_strnstr(dest, src, 3));
	//printf("%d\n", strnstr(dest, src, 30));
	//printf("%p\n", strnstr(dest, src, 30));
}
