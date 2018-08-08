/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 21:02:17 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/17 22:53:28 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		wordcount(char *str)
{
	int		i;
	int		wc;

	i = 0;
	wc = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
		{
			while (!(str[i] == '\t' || str[i] == ' ' || str[i] == '\n'
						|| str[i] == '\0'))
				i++;
			wc++;
		}
		if (str[i] != '\0')
			i++;
	}
	return (wc);
}

int		wordsize(char *str, int j, int wc, int wl)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
		{
			if (wc == j)
			{
				while (!(str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i] != '\0')
				{
					wl++;
					i++;
				}
				return (wl);
			}
			while (!((str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
						|| str[i] == '\0'))
				i++;
			wc++;
		}
		if (str[i] != '\0')
			i++;
	}
	return (404);
}

char	**mallocationschomage(char *str)
{
	char	**taboftabs;
	int		i;

	i = 0;
	if (str == 0)
		return (0);
	if (!(taboftabs = (char**)malloc(sizeof(*taboftabs) *
					(wordcount(str) + 1))))
		return (0);
	return (taboftabs);
}

char	*ft_strcpy_bis(char *dest, char *src, int *i)
{
	int		j;

	j = 0;
	while (src[*i] != '\0' && !(src[*i] == '\t' || src[*i] == ' '
				|| src[*i] == '\n'))
	{
		dest[j] = src[*i];
		*i = *i + 1;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		wc;
	char	**taboftabs;

	i = 0;
	wc = 0;
	taboftabs = mallocationschomage(str);
	while (str[i] != '\0' && str != 0)
	{
		if (!(str[i] == '\t' || str[i] == ' ' || str[i] == '\n'
					|| str[i] == '\0'))
		{
			if (!(taboftabs[wc] = (char*)malloc(sizeof(char) *
							(wordsize(str, wc, 0, 0) + 1))))
				return (0);
			taboftabs[wc] = ft_strcpy_bis(taboftabs[wc], str, &i);
			wc++;
		}
		if (str[i] != '\0')
			i++;
	}

	taboftabs[wc] = 0;
	return (taboftabs);
}
