/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:04:04 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/17 12:40:39 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strstr_p(char *str, char *to_find, unsigned int p)

{
	unsigned int	f;

						f = 0;
	while (to_find[f] != '\0')
	{
		if (str[p + f] != to_find[f])
		{	
			return (0);
		}
		else
		{
			++f;
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	p;

	p = 0;
	if (to_find == NULL)
		return (str);
	while (str[p] != '\0')
	{
		if (ft_strstr_p(str, to_find, p))
		{
			return (&str[p]);
		}
		else
		{
			++p;
		}
	}
	return (NULL);
}
/*
int main(void)
{
	printf("%s", ft_strstr("abcd", ""));
}
*/
