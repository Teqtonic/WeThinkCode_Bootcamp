#include <unistd.h>

int		ft_atoi(const char *str)
{
	int	j;
	int	count;

	count = 0;
	j = 0;
	if (str[0] == '-')
	{
		while (str[count+1] != '\0' && str[count + 1] <= '9' &&
				str[count + 1] >= '0')
		{
			j = j * 10 + (str[count + 1] - '0');
			count++;
		}
		return (j - 2*j);
	}
	else
	{
		while (str[count] != '\0' && str[count] <= '9' &&
				str[count] >= '0')
		{
			j = j * 10 + (str[count] - '0');
			count++;
		}
		return (j);
	}
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

int		ft_is_prim(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prim_sum(int nbr)
{
	int i;
	int count;

	i = 2;
	count = 0;
	while (i <= nbr)
	{
		if (ft_is_prim(i))
			count = count + i;
		i++;
	}
	ft_putnbr(count);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_add_prim_sum(ft_atoi(argv[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
