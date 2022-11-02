/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:29:19 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/03 17:46:22 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matrix_delete(void **matrix, int dimension)
{
	ft_matrix_free(matrix, dimension);
	matrix = NULL;
}

void	ft_matrix_free(void **matrix, int dimension)
{
	int	free_count;

	free_count = 0;
	while (dimension-- > 0)
	{	
		while (*(matrix + free_count) != NULL && dimension > 0)
			ft_matrix_free(*(matrix + free_count++), dimension);
		free_count = 0;
		while (matrix + free_count != NULL)
			free(matrix + free_count++);
	}
}
