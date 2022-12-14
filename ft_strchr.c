/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:04:14 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/14 22:24:17 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*chr;

	i = 0;
	chr = (char *)s;
	while (chr[i] != '\0')
	{
		if (chr[i] == c)
		{
			return (&chr[i]);
		}
		i++;
	}
	return (NULL);
}

// int main () {
//    const char str[] = "http://www.tutorialspoint.com/";
//    int c = 46;
//    char *ret;

//    ret = ft_strchr(str, c);

//    printf("String after |%c| is - |%s|\n", c, ret);

//    return(0);
// }