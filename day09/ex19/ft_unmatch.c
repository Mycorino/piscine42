/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:49:12 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/13 11:49:21 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_sort_integer_table(int *tab, int size)
{
	int	count;
	int	i;
	int	tmp;

	count = 0;
	while (count < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		count++;
	}
	return (tab);
}

int	ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	tab = ft_sort_integer_table(tab, length);
	while (i < length - 2)
	{
		if (tab[i] != tab[i + 1])
			return (tab[i]);
		i = i + 2;
	}
	return (tab[i]);
}
