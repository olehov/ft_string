/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_equal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <ogrativ@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:18:32 by ogrativ           #+#    #+#             */
/*   Updated: 2024/11/30 18:19:52 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

bool	str_equal(t_string str1, t_string str2)
{
	if (str1.data == NULL && str2.data == NULL && str1.length == str2.length
		&& str1.length == 0)
		return (true);
	if (str1.data == NULL || str2.data == NULL)
		return (false);
	if (str1.length != str2.length)
		return (false);
	if (0 != ft_strncmp(str1.data, str2.data, str1.length))
		return (false);
	return (true);
}
