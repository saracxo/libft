/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:26:21 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/11 12:39:35 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i -= 32;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c", ft_toupper('5'));
	return (0);
}
*/