/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_join.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <ogrativ@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:25:04 by ogrativ           #+#    #+#             */
/*   Updated: 2024/11/30 10:06:03 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	str_join(t_string *str, char *data)
{
	if (str == NULL || data == NULL)
		return (perror(strerror(EINVAL)), -1);
	if (str->data == NULL)
	{
		str->data = ft_strdup(data);
		str->length = ft_strlen(data);
		return (0);
	}
	str->data = ft_join_and_free(str->data, data);
	str->length = ft_strlen(str->data);
	return (0);
}
