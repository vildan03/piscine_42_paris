/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:11:46 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/14 16:31:04 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))	
	{
		++i;
	}
	while(str[i] == '-' || str[i] == '+')
	{	if(str[i] == '-')
		{
			sign = sign * -1;
		}
			++i;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
			++i;	
	}
	return (result * sign);
}
#include <stdio.h>
int main(void)
{
printf("%d", ft_atoi("	  	--+++-++6"));
}
