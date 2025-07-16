#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	return (-1);
	if (index == 1)
	return (1);
	if (index == 0)
	return (0);
	return (ft_fibonacci(index-1) + ft_fibonacci(index -2));

}


int main(void)
{
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(6));

}
