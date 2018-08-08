/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:08:18 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/10 13:08:21 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\v' ||
		str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (!(str[i] == '\t' || str[i] == ' ') && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (sign == -1)
		nb = nb * -1;
	return (nb);
}