/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:56:02 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/11 09:56:05 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') && !((str[i] >= 'A' &&
			str[i] <= 'Z')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') || ((str[i] >= 'A' &&
			str[i] <= 'Z')))
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] = str[i + 1] + 32;
		}
		i++;
	}
	return (str);
}
