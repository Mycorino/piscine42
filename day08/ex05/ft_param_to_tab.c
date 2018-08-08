/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:00:19 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/19 16:00:22 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
#include <stdio.h>

int					arg_size(int i, char **av)
{
	int				j;

	j = 0;
	while (av[i][j] != '\0')
		j++;
	return (j);
}

char				*ft_strdup(char *src)
{
	char			*dest;
	int				i;
	int				size;

	size = 0;
	i = 0;
	while (src[i])
	{
		++size;
		++i;
	}
	if (!(dest = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*params;
	int				i;

	i = 0;
	if (!(params = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		params[i].size_param = arg_size(i, av);
		params[i].str = av[i];
		params[i].copy = ft_strdup(av[i]);
		params[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	params[i].str = 0;
	return (params);
}
