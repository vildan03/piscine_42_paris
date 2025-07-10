/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:54:08 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/10 20:32:08 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	r;

	r = 0;

	i  = 0;
	while(dest[i] != '\0')
	{
		++i;
	}
	while(r < nb && src[r] != '\0')
	{
		dest[i+r] = src[r];
		++r;
	}
	dest[i+r] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char dest[] = "destination";
	char src[] = "source";
	unsigned int nb = 6;

	printf("%s", ft_strncat(dest,src,nb));
}
