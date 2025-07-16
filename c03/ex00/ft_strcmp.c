/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:28:18 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/16 11:47:42 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main(void)
{
	char s1[] = "uidbhciubv";
	char s2[] = "kufgvkuwevfw";

	printf("%d \n",ft_strcmp(s1,s2));
	printf("%d", strcmp(s1,s2));
}
*/
