/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:26:53 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/14 11:08:55 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] != '\0' || s2[i] != '\0') && i < n))
	{	
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		++i;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "abc";
	char s2[] = "abcde";
	unsigned int n;
	n = 0;
	printf("%d \n",ft_strncmp(s1,s2,n));
	printf("%d", strncmp(s1,s2,n));
}
*/
