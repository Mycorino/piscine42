/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:50:00 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/08 11:23:25 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	basis(int k)
{
	if(k ==0)
	{
		return(7);
	}
	return(basis(k - 1) + 2 * (1 + (3 + k) + ((k % 2) +( k/2))));
}

void	plevel(int hight, int wide, int shift)
{
	int i;
	int j;
		
	i = 0;
	while( i < hight)
	{
		j = - shift;
		while(j < hight - i - 1)
		{
			ft_putchar(' ');
			j++;
		}
		j += hight -1 -i;	
		ft_putchar('\/');
		while(j < wide-2)
		{
			ft_putchar('*');
			j++;
		}
		j=0;
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int k;
	int hight;
	int wide;
	int shift;
	k = 0;
	while(k < size)
	{
		wide = basis(k);
		shift = (basis(size - 1) - basis(k))/2;
		hight = 3 + k;
		plevel(hight,wide,shift);
		k++;
	}
}
