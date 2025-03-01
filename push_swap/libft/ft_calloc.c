/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:36:06 by mucankir          #+#    #+#             */
/*   Updated: 2025/03/01 21:48:27 by mucankir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*str;

	len = count * size;
	str = (void *)malloc(len);
	if (!str)
		return (NULL);
	ft_bzero(str, len);
	return (str);
}
