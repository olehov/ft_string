/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <ogrativ@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:30:09 by ogrativ           #+#    #+#             */
/*   Updated: 2024/11/30 10:08:24 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	str_clear(t_string *str)
{
	if (str == NULL)
		return ;
	if (str->data != NULL)
		free(str->data);
	str->length = 0;
}

void	str_free(t_string *str)
{
	if (str == NULL)
		return ;
	str_clear(str);
	free(str);
}
