#include <unistd.h>
#include <stdio.h>

int digits(int nbr)
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

void converter()
{
}

void ft_putnbr(int nb)
{
}

int main(void)
{
    printf("%d", digits(40));
}