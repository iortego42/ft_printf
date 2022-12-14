/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <iortego-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:59:13 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/07 14:59:16 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	lenght;

	if (s != NULL)
	{
		lenght = ft_strlen(s);
		return (write(fd, s, lenght));
	}
	return (write(1, "(null)", 6));
}
