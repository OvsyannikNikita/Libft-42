/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:51:10 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/23 10:15:59 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	size_t	i;
// 	char	*d;
// 	char	*s;

// 	i = 0;
// 	d = (char *)dst;
// 	s = (char *)src;
// 	while (i < len)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	return (dst);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d == s || !len)
		return (dst);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int main()
// {
//    char a[] = "Firststring";
//    const char b[] = "FI";
//    ft_memmove(a, b,5);
//    printf("New arrays : %s\n%s", a, b);
//    return 0;
// }