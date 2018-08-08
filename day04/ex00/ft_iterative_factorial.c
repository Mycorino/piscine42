/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:54:14 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/09 12:44:46 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb == 0)
		result = 1;
	else if (nb < 0 || nb > 12)
		result = 0;
	else
	{
		result = nb;
		while (nb > 1 && nb < 13)
		{
			nb--;
			result = result * nb;
		}
	}
	return (result);
}
