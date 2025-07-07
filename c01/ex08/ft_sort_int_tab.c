/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 09:25:17 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/07 16:44:11 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	swapped;

	i = 0;
	swapped = 1;
	while (swapped == 1)
	{
	swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			++i;
		}
	}
}
/*


		int main(void)
{
		int tab[5]={7,6,1,2,0};
			ft_sort_int_tab(tab,5);
		int i;
		i=0;
		while(i<5)
		{
			printf("%d,",tab[i]);
			++i;
		}
} */
