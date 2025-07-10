/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:54:38 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/09 21:23:51 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		char ch = str[i];
		if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
		{
			return (0);
		}

		if (!(ch >= 'a' && ch <= 'a'))
		{
			if ()
		}

		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		else if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		++i;
	}
	return (1);
}
/*
int main(void)
{
printf("%d",ft_str_is_alpha("i0a"));
}*/
