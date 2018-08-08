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

int	alert(char *str, char *to_find)
{
	int j;
	int i;

	if (!to_find)
		return (0);
	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] == to_find[0] && str[j - 1] == ' ') || str[0] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[j + i] == to_find[i])
				++i;
			if (to_find[i] == '\0' && (str[j + i] == '\0' || str[j + i] == ' '))
				return (1);
		}
		++j;
	}
	return (0);
}


int main (int argc, char **argv)
{
	int i;
	int j;
	char char1[] = "president";
	char char2[] = "Bauer";
	char char3[] = "attack";

	i = 1;
	j = 0;
	while (argv[i] != '\0')
	{
		if (alert(argv[i], char1))
			j = 1;
		if (alert(argv[i], char2))
			j = 1;
		if (alert(argv[i], char3))
			j = 1;
		i++;
	}
	if (j)
		write(1, "Alert!!!\n", 9);
	return(0);
}