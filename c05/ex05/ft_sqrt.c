# include <stdio.h>

int	ft_sqrt(int nb)
{
	int	f;
	
	f = 0;
	while(f < nb)
	{
		if(nb == f*f)
		{
			return (f);
		}
		++f;
	}
	return (0);
}

int main(void)
{
	printf("%d\n",ft_sqrt(4));
	printf("%d\n",ft_sqrt(0));
	printf("%d\n",ft_sqrt(-1));
	printf("%d\n",ft_sqrt(-2));
	printf("%d\n",ft_sqrt(3));
	printf("%d\n",ft_sqrt(16));
	printf("%d\n",ft_sqrt(5));
	printf("%d\n",ft_sqrt(100));


}

