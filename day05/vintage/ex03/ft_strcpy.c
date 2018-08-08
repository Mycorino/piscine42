/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:07:19 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/10 13:07:23 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i+1] = src[i+1];
	return (dest);
}


#include <stdio.h>

int main(void)
{
	char str[] = "HELLO";
	char str2[] = "babaa";
    printf("Expected 0 : %s\n", ft_strcpy(str, str2));
    return(0);
}