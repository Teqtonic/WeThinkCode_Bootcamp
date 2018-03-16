#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return((n == 1) ? 1 : 0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", is_power_of_2(atoi(argv[1])));
	else
		write(1, "\n", 1);
	return (0);
}
