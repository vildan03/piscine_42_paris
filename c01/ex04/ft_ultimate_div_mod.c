/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:32:45 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/07 17:39:40 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <math.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

temp = *a;
*a = *a / *b;
*b = temp % *b;
}
/*
int     main(void)
{
int c;
int d;
c=20;
d=6;
ft_ultimate_div_mod(&c,&d);
printf("div:%d, mod:%d",c,d);}
*/
