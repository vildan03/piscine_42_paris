/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:54:38 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/08 18:08:01 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{	
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!((str[i] >= 65 &&  str[i] <= 90) || ( str[i] >= 97 && str[i] <= 122)))
		{
			return 0;
		}
	++i
	}
	return 1;
}

int main(void)
{
printf("%d",ft_str_is_alpha(""));
} 
