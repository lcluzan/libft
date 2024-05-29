/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouillebobby <nouillebobby@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:38:32 by nouillebobb       #+#    #+#             */
/*   Updated: 2024/05/28 13:47:54 by nouillebobb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while(s[i])    
        i++;
    write(fd, s, i);
}
