/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:17:12 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/07 18:24:27 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
	{
	int	temp;
	int	i;
	int	r;

	r = size - 1;
	i = 0;
	while (i <= r)
	{
		temp = tab[i];
		tab[i] = tab[r];
		tab[r] = temp;
		++i;
		--r;
	}
}
/*
int main(void) {
  int size;
  size = 4;
  int i;
  i = 0;
  int tab[] = {1, 2, 3, 4};
  ft_rev_int_tab(tab, size);
  while (i < size) {
    printf("%d,", tab[i]);
    ++i;
  }
}*/
