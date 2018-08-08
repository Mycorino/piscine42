/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 11:04:41 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/12 11:04:44 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_sort_char_table(char *tab, int size)
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
	return (0);
}

int		main(int argc, char **argv)
{
	ft_sort_char_table(argv, argc)
	return (0);
}



int i;

	i = 1;
	while (argv[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}