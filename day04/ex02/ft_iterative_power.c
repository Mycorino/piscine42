/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:16:19 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/09 15:16:33 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int p;

	p = nb;
	if (power > 0)
	{
		while (power > 1)
		{
			power--;
			nb = nb * p;
		}
		return (nb);
	}
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (0);
}
