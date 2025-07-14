#include <unistd.h>
#include <stdio.h>

long digits(long nbr)
{
    int i;
    i = 0;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        ++i;
    }
    return (i);
}

void converter_char(unsigned long nbr, char *str)
{
int	digit;
digit = digits(nbr);
str[digit] = '\0';
while (digit > 0)
{
	str[digit-1] = '0' + nbr % 10;
	--digit;
	nbr = nbr / 10;
}
}

void ft_putnbr(int nb)
{	
	char str[12];
	long n = nb;
	int digit;
	if(n == 0)
	{
		write(1,"0",1);
		return;
	}

	if (n < 0)
	{	write(1, "-",1);
		n = -n;
	}
	digit = digits(n);
	converter_char(n,str);
	write(1,str,digit);
}
int main(void)
{
	ft_putnbr(-42);
	write(1,"\n",1);
	ft_putnbr(-2147483647);
	write(1,"\n",1);
	ft_putnbr(2147483647);
	write(1,"\n",1);
	ft_putnbr(0);
}
