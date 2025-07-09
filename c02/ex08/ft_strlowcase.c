/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:03:13 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/09 15:15:30 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= ('A' - 'a');
		}
		++i;
	}
	return (str);
}
/*
int main(void)
{
	char s[] = "0JHDJHJHDJKSDKJVJKSD78378523872dwada
	printf("%s", ft_strlowcase(s));
}*/
