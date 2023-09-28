/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:34:44 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/27 12:02:23 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n);
int     ft_isalnum(int i);
int	    ft_isalpha(int i);
int	    ft_isascii(int i);
int     ft_isdigit(int i);
int	    ft_isprint(int i);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int ft_tolower(int i);
int ft_toupper(int i);