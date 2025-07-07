/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:47:54 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/05 17:39:06 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	f;	
	char	s;	
	char	t;	

	f = '0';
	while (f <= '7')
	{
	s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				write(1, &f, 1);
				write(1, &s, 1);
				write(1, &t, 1);
				if (!(f == '7' && s == '8' && t == '9'))
					write(1, ", ", 2);
						++t;
			}
				++s;
		}
			++f;
	}
}
/*int main() {
 ft_print_comb();
 return 0;
}*/
