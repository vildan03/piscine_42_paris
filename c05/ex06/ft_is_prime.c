#include <stdio.h>

int	ft_is_prime(int nb)

{
	int i;

	i = 2;
	if(nb < 0)
	return (0);
	if(nb == 0 || nb == 1)
	return (0);
	if(nb == 2)
	return (1);
	while(i < nb)
	{
		if(nb % i == 0)
		{
			return (0);
		}
		++i;
	}
	return (1);
}

int main (void)
{
	printf("%d\n",ft_is_prime(101));
	printf("%d\n",ft_is_prime(27));
	printf("%d\n",ft_is_prime(105));
	printf("%d\n",ft_is_prime(3));
	printf("%d\n",ft_is_prime(5));
	printf("%d\n",ft_is_prime(11));
	printf("%d\n",ft_is_prime(-1));
	printf("%d\n",ft_is_prime(-2));
	printf("%d\n",ft_is_prime(-11));


}
