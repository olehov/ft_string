/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <ogrativ@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:06:44 by ogrativ           #+#    #+#             */
/*   Updated: 2024/11/30 10:11:03 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <errno.h>
# include <string.h>
# include "../ft_libft/headers/libft.h"

/**
 * @struct s_string
 * @brief A structure representing a custom string with data and length.
 * 
 * @var s_string::data
 * Pointer to the character data.
 * 
 * @var s_string::length
 * The length of the string.
 */
typedef struct s_string
{
	char	*data; /**< Pointer to the character data. */
	size_t	length; /**< Length of the string. */
}	t_string;

/**
 * @brief Creates a t_string object from the given string.
 * 
 * @param str The input string used to initialize the t_string object.
 * @return A t_string object containing the copied data and its length.
 */
t_string	str_create(char *str);
/**
 * @brief Creates a t_string object from the given string.
 * 
 * @param str The input string used to initialize the t_string object.
 * @return A t_string pointer containing the copied data and its length.
 */
t_string	*str_new(char *str);

/**
 * @brief Updates the value of a t_string object.
 * 
 * @param str A pointer to the t_string object to update.
 * @param data The new data to set.
 * @return Returns -1 if there is an error, 0 if successful.
 */
int			str_update(t_string *str, char *data);

/**
 * @brief Joins new data with the existing string and updates the length.
 * 
 * @param str A pointer to the t_string object to update.
 * @param data The new data to join with the existing string.
 * @return Returns -1 if there is an error, 0 if successful.
 */
int			str_join(t_string *str, char *data);

/**
 * @brief Compares two t_string objects for equality.
 * 
 * @param str1 The first t_string object.
 * @param str2 The second t_string object.
 * @return Returns true if both data and length are equal, false otherwise.
 */
bool		str_equal(t_string str1, t_string str2);

/**
 * @brief Frees the memory allocated for
 * the string data and sets the length to zero.
 * 
 * @param str A pointer to the t_string object to clear.
 */
void		str_clear(t_string *str);
/**
 * @brief Frees the memory allocated for
 * the string data and sets the length to zero.
 * 
 * @param str A pointer to the t_string pointer created by str_new to clear.
 */
void		str_free(t_string *str);
#endif