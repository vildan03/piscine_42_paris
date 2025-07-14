/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:45:09 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/14 11:10:55 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		++i;
		++n;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[100] = "destination";
	char src[] = "source";
	printf("%s", ft_strcat(dest,src));
}
*/
