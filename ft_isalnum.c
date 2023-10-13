/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:52:44 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/11 12:37:29 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	return (i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0'
		&& i <= '9');
}

/*
int	main(void)
{
	printf("%d", ft_isalnum('-'));
	return(0);
}
*/