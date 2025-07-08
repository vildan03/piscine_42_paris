/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:04:41 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/08 17:20:55 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i <= n - 1)
	{
	dest[i] = src[i];
	++i;
	}
	while (i <= n - 1)
	{
	dest[i] = '\0';
	++i;
	}
	return (dest);
}
/*
int main(void)

{
	char src[] = "an";
  	char dest[] = "";
	unsigned int n;
	n = 5;
	ft_strncpy(dest,src,n);
	printf("destination:%s,source:%s,n:%d",dest,src,n);
}
*/
