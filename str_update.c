/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_update.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <ogrativ@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:03:18 by ogrativ           #+#    #+#             */
/*   Updated: 2024/11/30 10:06:06 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	str_update(t_string *str, char *data)
{
	if (str == NULL || data == NULL)
		return (perror(strerror(EINVAL)), -1);
	str_clear(str);
	str->length = ft_strlen(data);
	str->data = malloc(sizeof(char *) + str->length + 1);
	str->data = ft_memcpy(str->data, data, str->length + 1);
	return (0);
}
