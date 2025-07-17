/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:26:27 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/17 12:42:06 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	j;

	s = 0;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[s] != '\0')
		++s;
	while (j < size - i && src[j] != '\0')
	{
		dest[i + j] = src[j];
		++j;
	}
	if (j < size - i)
		dest[i + j] = '\0';
	return (i + s);
}
/*
 int main(void)
{
char dest[5] = "t";
char src[3] = "ip";
printf("%d", ft_strlcat(dest,src,sizeof(dest)));
}
*/
