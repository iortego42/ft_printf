/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_how_many_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:44:40 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/02 16:48:10 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_how_many_char(char const *s, char sentinel)
{
	int	count;

	count = 0;
	while (*s != sentinel && *(s++) != 0)
		count++;
	return (count);
}
