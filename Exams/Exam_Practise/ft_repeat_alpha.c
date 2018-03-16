#include <unistd.h>

void	repeat_alpha(char *str)
{
	int		i;
	int		j;
	int		index[300];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			index[i] = ((str[i] - 'A') % 26);
		else if (str[i] >= 'a' && str[i] <= 'z')
			index[i] = ((str[i] - 'a') % 26);
		else
			index[i] = 0;
		while (j < index[i] + 1)
		{
			write(1, &(str[i]), 1);
			j++;
		}
		j = 0;
		i++;
	}	
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		repeat_alpha(argv[1]);
	return (0);
}
