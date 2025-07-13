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

#include <stdio.h>
#include <string.h>
int	ft_strstr_p(char *str, char *to_find, unsigned int p)
{	
	unsigned	int f;
	unsigned	int b;
	b = 1;
	f = 0;
	while (str[p] != '\0' && to_find[f] != '\0' )
	{	
		 
		if(str[p+f] != to_find[f])
		{	b = 0;
			break;
		}
		else
		{
 			++f;
		}
	}
	return b;
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int f;
	unsigned int p;
	f=0;
	p=0;
	unsigned int b; 
	while(str[p] != '\0')
	{	
	b = ft_strstr_p(str,to_find,p);
		if(b==1)
		{
			return (&str[p]);
		}
		else
		{
		++p;
		}
	}
	return (str);
}

	





		
int main(void)
{
printf("%s", ft_strstr("hello" , "ll"));
}	 	
		







//	char str[] = "i love you";
//	char to_find[] = "love";
//	printf("%s", ft_strstr(str,to_find));
//	printf("%s",strstr(str,to_find));




