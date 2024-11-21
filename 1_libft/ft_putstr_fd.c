/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:51:06 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 09:58:20 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *src, int fd)
{
	size_t	i;

	if (!src)
		return ;
	i = 0;
	while (src[i] != '\0')
	{
		write(fd, &src[i], 1);
		i++;	
	}
}