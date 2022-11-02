/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_how_many_word.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:45:51 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/02 16:50:11 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_how_many_word(char const *s, char sentinel)
{
	int	count;

	count = 0;
	while (*(s) != 0)
		if (*(s++) != sentinel && (*s == sentinel || *s == 0))
			count++;
	return (count);
}
