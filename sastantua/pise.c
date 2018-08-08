/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:50:00 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/07 19:57:26 by cfontana         ###   ########.fr       */
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

void	plevel(int hight, int wide)
{
	int i;
	int j;
		
	i = 0;
	j = 0;
	
	while( i < hight)
    {
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

	k = 0;
	while(k < size)
	{
		wide = basis(k);
		hight = 3 + k;
		plevel(hight,wide);
		k++;
	}
}
