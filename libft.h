/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:43:39 by callwood          #+#    #+#             */
/*   Updated: 2026/10/15 12:47:19 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* Functions of char classification and manipulation */
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

/* Functions of string manipulation */
size_t	ft_strlen(const char *s);


#endif
