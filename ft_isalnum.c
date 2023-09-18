/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:52:44 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/18 11:21:19 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int i)
{
    return (i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9');
}

#include <stdio.h>

int main()
{ 
    printf("%d", ft_isalnum('-'));
    return(0);
}