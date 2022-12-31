/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:59:05 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/31 16:53:26 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	find;
	size_t			i;

	i = 0;
	find = c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == find)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//    const char str[] = "http://www.tutorialspoint.com/";
//    int c = 46;
//    char *ret;

//    ret = ft_memchr(str, c, 40);

//    printf("String after |%c| is - |%s|\n", c, ret);

//    return(0);	
// }