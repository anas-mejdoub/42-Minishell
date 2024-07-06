/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:27:10 by nbenyahy          #+#    #+#             */
/*   Updated: 2024/07/06 16:33:48 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	*helper[1024];
	char		*ptr;

	ptr = (char *)malloc(1);
	if (!ptr || fd < 0 || BUFFER_SIZE >= INT_MAX
		|| BUFFER_SIZE < 1)
		return (ft_gnl_bonus_free(&helper[fd], &ptr));
	ptr[0] = '\0';
	ptr = ft_gnl_bonus_join(ptr, helper[fd]);
	helper[fd] = ft_gnl_bonus_change_reminder(helper[fd]);
	if (!ptr || !helper[fd])
		return (ft_gnl_bonus_free(&helper[fd], &ptr));
	while (!ft_gnl_bonus_strchr(ptr, '\n') && read(fd, helper[fd], BUFFER_SIZE))
	{
		ptr = ft_gnl_bonus_join(ptr, helper[fd]);
		helper[fd] = ft_gnl_bonus_change_reminder(helper[fd]);
		if (!ptr || !helper[fd])
			return (ft_gnl_bonus_free(&helper[fd], &ptr));
	}
	if (ptr[0] == '\0')
		return (ft_gnl_bonus_free(&helper[fd], &ptr));
	return (ptr);
}
