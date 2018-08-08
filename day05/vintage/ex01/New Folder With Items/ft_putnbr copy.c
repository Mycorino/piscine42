/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:44:42 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/10 09:44:49 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			nb = -1*nb;
			ft_putchar('-');
			if (nb % 10)
				ft_putchar(nb + '0');
			else
			{
				ftputchar(ft_putnbr(nb / 10) % 10 + '0');
			}
		}
		if (nb >= 0)
		{
			while (!(nb % 10 == 0))
			{
				nb = nb/10
			}
	
		}
	}
}

#include <stdio.h>

int main(void)
{
    printf("Expected 45 : %d\n", ft_putnbr(45);
    return(0);
}