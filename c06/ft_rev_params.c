#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i++]);
	}
	ft_putchar('\n');
}
int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i > 0)
		ft_putstr(argv[i--]);
	return (0);	
}
