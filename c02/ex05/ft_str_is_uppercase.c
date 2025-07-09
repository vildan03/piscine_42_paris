/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:15:31 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/09 11:30:01 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d", ft_str_is_uppercase("A"));
	printf("%d", ft_str_is_uppercase("a"));
	printf("%d", ft_str_is_uppercase("Aa"));
	printf("%d", ft_str_is_uppercase("aA"));
	printf("%d", ft_str_is_uppercase("#A"));
	printf("%d", ft_str_is_uppercase("A#"));
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("AAA"));
}
*/
