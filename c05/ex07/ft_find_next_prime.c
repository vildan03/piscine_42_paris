#include <stdio.h>

int     ft_is_prime(int nb)

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

int	ft_find_next_prime(int nb)

{
    int i;
	i = 1;
	if(ft_is_prime(nb))
	return (nb);
	while(ft_is_prime(nb + i) == 0)
	{
		++i;
	}
	return(nb + i);
}

int main (void)
{
        printf("%d\n",ft_find_next_prime(101));
        printf("%d\n",ft_find_next_prime(0));
        printf("%d\n",ft_find_next_prime(1));
        printf("%d\n",ft_find_next_prime(2));
        printf("%d\n",ft_find_next_prime(3));
        printf("%d\n",ft_find_next_prime(11));
        printf("%d\n",ft_find_next_prime(5));
        printf("%d\n",ft_find_next_prime(6741));


}

