/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:26:53 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/10 16:56:25 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
	
		}
		else if (s1[i] < s2[i])
		{
		
			return (s1[i] - s2[i]);
		}
		++i;
	
	}
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "ab";
	char s2[] = "abjdyfgjdyf";
	unsigned int n;
	n = 5;
	printf("%d \n",ft_strncmp(s1,s2,n));
	printf("%d", strncmp(s1,s2,n));
}
