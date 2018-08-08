/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:58:53 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/24 10:58:57 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print(int nb)
{
	printf("%i\n", nb);
}

int main()
{
	int tab[5];
	int i;

	i = 0;
	while (i < 5)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 5, &ft_print);
	return (0);
}

