#include <unistd.h>

void ft_display_first(char *str)
{
	int		i;
	int 	j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (str[i] == '\0')
		write(1, "\n", 1);
	else
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		k = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			if (str[i] > 32 && str[i] < 127 && str[i + 1] == ' ')
				j = i;
			i++;
		}
		while (k < j + 1)
		{
			write(1, &(str[k]), 1);
			k++;
		}
		write(1, "\n", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_first(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
