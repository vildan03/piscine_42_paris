/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:04:04 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/11 12:22:12 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned	int i;
	unsigned	int f;

	i = 0;
	f = 0;
	while (to_find[f] != '\0' && str[i] != '\0')
	{
		while (str[i + f] ==  to_find[f])
		{
			++f;
		}
		if(str[i+f] != to_find[f] && to_find[f] != '\0')
		{
		++i;
		}
	}
	return &str[i];
}
			


#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "";
	char to_find[] = "love";
	printf("%s", ft_strstr(str,to_find));
//	printf("%s",strstr(str,to_find));
}




