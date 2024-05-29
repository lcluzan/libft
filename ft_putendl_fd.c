/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouillebobby <nouillebobby@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:48:38 by nouillebobb       #+#    #+#             */
/*   Updated: 2024/05/28 13:50:16 by nouillebobb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_putendl_fd(char *s, int fd)
{
    size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}
