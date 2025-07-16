/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:26:28 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/16 14:26:11 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	duplicate(char *base)
{
	int	i;
	int	p;

	p = 0;
	i = 0;
	while (base[p] != '\0')
	{
		i = p + 1;
		while (base[i] != '\0')
		{
			if (base[i] == base[p])
				return (0);
			++i;
		}
		++p;
	}
	return (1);
}

int	is_base_valid(char *base)
{
	int	i;
	int	length_of_base;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		++i;
	}
	if (duplicate (base) == 0)
		return (0);
	length_of_base = i;
	if (i == 0 || i == 1)
		return (0);
	return (length_of_base);
}

void	putnbr_validated_base( int nbr, char *base, int length_of_base)
{
	if (nbr < length_of_base)
		write (1, &base[nbr], 1);
	else
	{
		putnbr_validated_base((nbr / length_of_base), base, length_of_base);
		nbr = nbr % length_of_base;
		write (1, &base[nbr], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length_of_base;

	length_of_base = is_base_valid(base);
	if (length_of_base != 0)
		putnbr_validated_base(nbr, base, length_of_base);
}
/*
#include <stdio.h>
int main (void)
{
ft_putnbr_base(1,"-");
write(1,"1",1);
ft_putnbr_base(1,"-9");
write(1,"2",1);
ft_putnbr_base(1,"+-");
write(1,"3xx",1);
ft_putnbr_base(1,"+");
write(1,"4xx",1);
ft_putnbr_base(1,"9+");
write(1,"5xx",1);
ft_putnbr_base(1,"9-");
write(1,"6xx",1);
ft_putnbr_base(1,"1");
write(1,"7xx",1);
ft_putnbr_base(1,"");
write(1,"8xx",1);
ft_putnbr_base(1,"22");
write(1,"9xx",1);
ft_putnbr_base(1,"122");
write(1,"ax",1);
ft_putnbr_base(1,"221");
write(1,"bxx",1);
ft_putnbr_base(1,"212");
write(1,"cxx",1);
ft_putnbr_base(1,"1231");
write(1,"dxx",1);
ft_putnbr_base(1,"123");
write(1,"exx",1);
ft_putnbr_base(5,"abcde");
write(1,"fxx",1);
}
*/
