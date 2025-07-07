/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:08:38 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/07 18:29:51 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	++i;
	}
	return (i);
}
/*
	int main(void)

{ char mystring[]="hello";
	int i;

i=ft_strlen(mystring);
	printf("%d",i);
}*/
