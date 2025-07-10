/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:04:04 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/10 23:19:38 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
char	*ft_strstr(char *str, char *to_find)
{
	unsigned	int i;
	unsigned	int f;
	char	*found;
	i = 0;
	f = 0;

	if (to_find[f] == '\0')
	{
		return (str);
	}
	while(str[i] != '\0')
	{
		while(str[i] != to_find[f])
		{
			++i;
			while(str[i] == to_find[f])
                        {  
                        found[f] = to_find[f];
                        ++f;
                        }
			++i;
		}
	}
		return (found);
}*/
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "llo love you";
	char to_find[] = "";
//	printf("%s", ft_strstr(str,to_find));
	printf("%s",strstr(str,to_find));
}




