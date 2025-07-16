#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb == 0 && power == 0)
	return (1);
	if (power < 0)
	return (0);
	if (power == 0)
	return (1);
	else
	{
		while (i <= power)
		{
		result *= nb;
		++i;
		}
	}
	return (result);
}

int main(void)
{
	printf("%d\n", ft_iterative_power(1, 1));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(-2, 4));
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(4, 4));
	printf("%d\n", ft_iterative_power(-1, -1));
	printf("%d\n", ft_iterative_power(1, -1));
	printf("%d\n", ft_iterative_power(-1, 1));
	printf("%d\n", ft_iterative_power(1, 7));
	printf("%d\n", ft_iterative_power(7, 1));
	printf("%d\n", ft_iterative_power(7, 0));
	printf("%d\n", ft_iterative_power(0, 1));
}

