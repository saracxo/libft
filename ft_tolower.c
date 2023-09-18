/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:52:11 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/13 14:54:33 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_tolower(int i)
{
    if (i >= 'A' && i <= 'Z')
        i += 32;
    return(i);    
}

/*
#include <stdio.h>

int main(void)
{
    printf("%c", ft_tolower('8'));
    return (0);
}
*/