/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 08:42:41 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/13 08:42:44 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		alert(char *str, char *to_find)
{
	int j;
	int i;

	str = ft_strlowcase(str);
	if (!to_find)
		return (0);
	i = 0;
	j = 0;
	while (to_find[i])
	{
		while (str[j] == ' ' || str[j] == '\t')
			j++;
		if (str[j] != to_find[i])
			return (0);
		i++;
		j++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	(void)argc;
	i = 1;
	j = 0;
	while (argv[i] != '\0')
	{
		if (alert(argv[i], "president"))
			j = 1;
		if (alert(argv[i], "bauer"))
			j = 1;
		if (alert(argv[i], "attack"))
			j = 1;
		i++;
	}
	if (j == 1)
		write(1, "Alert!!!\n", 9);
	return (0);
}
