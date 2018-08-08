/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:20:20 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/12 18:20:22 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		morning(int hour)
{
	if (hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN 12.00 A.M. and %d.00 A.M.\n", hour + 1);
	}
	if (hour <= 10 && hour > 0)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 A.M. and %d.00 A.M.\n", hour, hour + 1);
	}
	else if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 A.M. and %d.00 P.M.\n", 11, 12);
	}
	else if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 P.M. and %d.00 P.M.\n", 12, 01);
	}
	return (0);
}

int		afternoon(int hour)
{
	if (hour >= 12 && hour <= 22)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 P.M. and %d.00 P.M.\n", hour, hour + 1);
	}
	else if (hour == 23)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE");
		printf(" BETWEEN %d.00 P.M. and 12.00 A.M.\n", hour);
	}
	else if (hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN 12.00 A.M. and 1.00 A.M.\n");
	}
	return (0);
}

void	ft_takes_place(int hour)
{
	if (hour <= 12)
		morning(hour);
	else
		afternoon(hour);
}
