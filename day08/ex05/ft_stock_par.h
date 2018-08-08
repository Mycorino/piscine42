/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:58:55 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/23 16:31:12 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

char				**ft_split_whitespaces(char *str);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
char				*ft_strdup(char *src);
void				ft_putchar(char c);
void				ft_show_tab(struct s_stock_par *par);

typedef	struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

#endif
