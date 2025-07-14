/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:36:29 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/14 16:37:49 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == 43 || base[i] == 45
			|| !(base[i] >= 32 && base[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	long	base_size;

	nb = nbr;
	base_size = ft_strlen(base);
	if (base_check(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb < base_size)
		{
			ft_putchar(base[nb]);
		}
		else
		{
			ft_putnbr_base(nb / base_size, base);
			ft_putnbr_base(nb % base_size, base);
		}
	}
}
#include <stdio.h>
int main() {
    char my_base[] = "0123456789ABCDEF";
    ft_putnbr_base(-21474838, my_base);
    return 0;
}
