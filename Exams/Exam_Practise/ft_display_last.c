#include <unistd.h>

void ft_display_last(char *str)
{
	int		i;
	int 	j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		write(1, "\n", 1);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] == ' ' && (str[i + 1] > 32 && str[i + 1] < 127))
				j = i + 1;
			i++;
		}
		while (str[j] > 32 && str[j] < 127)
		{
			write(1, &(str[j]), 1);
			j++;
		}
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_last(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
