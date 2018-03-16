#include <unistd.h>

void	alpha_mirror(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = 'm' - (str[i] - 'n');
			write(1, &c, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = 'M' - (str[i] - 'N');
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
