/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <ogrativ@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:22:24 by ogrativ           #+#    #+#             */
/*   Updated: 2024/11/30 10:05:58 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "../ft_color_utils.h"

t_string	str_create(char *str)
{
	t_string	string;
	size_t		i;

	i = 0;
	string.data = NULL;
	string.length = 0;
	if (str == NULL)
		return ((void)printf("Error: String value is null"),
			perror(strerror(EINVAL)), string);
	string.length = ft_strlen(str);
	string.data = malloc(sizeof(char *) * (string.length + 1));
	if (string.data == NULL)
	{
		string.length = 0;
		return (perror(strerror(ENOMEM)), string);
	}
	while (i < string.length)
	{
		string.data[i] = str[i];
		i++;
	}
	string.data[string.length] = '\0';
	return (string);
}

t_string	*str_new(char *str)
{
	t_string	*string;
	size_t		i;

	i = 0;
	string = malloc(sizeof(t_string));
	if (str == NULL || string == NULL)
		return ((void)printf("Error: String value is null"),
			perror(strerror(EINVAL)), string);
	string->length = ft_strlen(str);
	string->data = malloc(sizeof(char *) * (string->length + 1));
	if (string->data == NULL)
	{
		string->length = 0;
		return (perror(strerror(ENOMEM)), string);
	}
	while (i < string->length)
	{
		string->data[i] = str[i];
		i++;
	}
	string->data[string->length] = '\0';
	return (string);
}
