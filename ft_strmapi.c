/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:57:29 by sarcasti          #+#    #+#             */
/*   Updated: 2024/04/05 11:18:10 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	const size_t	len = ft_strlen(s);

	if (!s)
		return (NULL);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char my_func(unsigned int i, char c)
{
    return ft_tolower(c);
}

int main()
{
    char const *s = "Hola, mundo!";
    char *result = ft_strmapi(s, my_func);
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}*/ 