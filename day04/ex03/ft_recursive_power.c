/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:13:51 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/09 16:14:38 by cfontana         ###   ########.fr       */
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
