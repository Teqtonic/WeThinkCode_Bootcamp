#include <unistd.h>

int		check_a(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a\n", 2);
	else if (check_a(argv[1]) == 1 && argc == 2)
		write(1, "a\n", 2);
	else
		write(1, "\n", 1);
	return (0);
}
