#include <unistd.h>

/*void	print_bits(unsigned char octet)
{
	int		i;
	int		j;
	int		div;
	int		array[300];

	j = 0;
	i = 0;
	div = octet;
	while (div != 0)
	{
		array[i] = (div % 2);
		div /= 2;
		j++;
		i++;
	}
	i = 0;
	while (i < (8 - j))
	{
		write(1, "0", 1);
		i++;
	}
	while (j > 0)
	{
		if (array[j - 1] == 0)
			write(1, "0", 1);
		if (array[j - 1] == 1)
			write(1, "1", 1);
		j--;
	}
}*/

void	print_bits(unsigned char octet)
{
	int		i;

	i = 256;
	while (i /= 2)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

unsigned char reverse_bits(unsigned char b)
{
	unsigned char	r = 0;
	unsigned		byte_len = 8;

	while (byte_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}

int	main(void)
{
	unsigned char c;

	c = '.';
	write(1, &c, 1);
	write(1, "\n", 1);
	print_bits(c);
	c = reverse_bits(c);
	write(1, "\n", 1);
	print_bits(c);
	write(1, "\n", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
