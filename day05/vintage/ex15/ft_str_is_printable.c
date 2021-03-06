/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:09:57 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/11 14:11:41 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int b;

	i = 0;
	b = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 63))
			b = 0;
		i++;
	}
	return (b);
}
