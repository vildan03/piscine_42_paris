/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:28:18 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/10 15:49:03 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
	result = 0;
		}
		else if (s1[i] > s2[i])
		{
	result = 1;
			return (result);
		}
		else if (s1[i] < s2[i])
		{
	result = -1;
			return (result);
		}
		++i;
	}
	return (result);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "a";
	char s2[] = "a";

	printf("%d \n",ft_strcmp(s1,s2));
	printf("%d", strcmp(s1,s2));
}*/