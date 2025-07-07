/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:54:57 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/07 17:21:38 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <math.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}
/*
int	main(void)
{
int a;
int b;
a=20;
b=6;
int  pdiv;
int  pmod;
ft_div_mod(a,b,&pdiv,&pmod);
printf("div:%d, mod:%d",pdiv,pmod);}*/
