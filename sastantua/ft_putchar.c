/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:16:10 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/04 17:36:27 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int  ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
