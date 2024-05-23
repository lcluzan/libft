/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <lcluzan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:37:04 by lcluzan           #+#    #+#             */
/*   Updated: 2024/05/23 16:37:22 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *ptr;
	unsigned char character;

	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == character)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
