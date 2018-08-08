/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 20:00:47 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/11 20:00:54 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		power--;
		return (nb);
	}
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (0);
}

int	ft_eight_queens_puzzle(void)
{
	int i;

	i = 0;
	i = ft_recursive_power(10, 2);
	i = i - ft_recursive_power(2, 3);
	return (i);
}
