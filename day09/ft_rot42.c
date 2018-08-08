/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:27:00 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/12 21:27:03 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char inverter(char c)
{

	if(c>='A' && c<='Z')
		return (c - 'A' + 42) % 26 + 'A';
    if(c>='a' && c<='z')
    	return (c - 'a' + 42) % 26 + 'a';
	return c;
}

char *ft_rot42(char *str)
{

	while (str[i] != '\n')
	{
		str[i] = inverter(str[i]);
		i++
	}
	return (str);
}

int main(void)
{
    printf("Bonjour,  %d \n", ft_rot42("Bonjour"));
    return (0)
}