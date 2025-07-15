#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int nb)
{	
	long n = nb;

	if (n == 0)
	{
		write(1,"0",1);
		return;
	}

	if (n < 0)
	{	
		if (n == -2147483648)
		{
                	write(1,"-2147483648",11);
			return;
		}
		else
		{
			write(1, "-",1);
			n = -n;
		}
	}
		
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	n = n%10 + '0';
	write(1,&n,1);
}

int main(void)
{
	ft_putnbr(-42);
	write(1,"\n",1);
	ft_putnbr(-2147483648);
	write(1,"\n",1);
	ft_putnbr(2147483647);
	write(1,"\n",1);
	ft_putnbr(0);
}
