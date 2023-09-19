/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:34:44 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/19 17:38:48 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);