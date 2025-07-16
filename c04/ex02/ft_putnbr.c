/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:57:22 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/16 14:37:22 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (nb < 0)
	{	
		if (nb == -2147483648)
		{
			write (1, "-2147483648", 11);
			return ;
		}
		else
		{
			write (1, "-", 1);
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	nb = nb % 10 + '0';
	write (1, &nb, 1);
}
/*
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
*/
