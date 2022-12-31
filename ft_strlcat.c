/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:42:14 by nikitos           #+#    #+#             */
/*   Updated: 2022/12/31 17:00:08 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{	
	size_t	i;
	size_t	k;
	size_t	res;

	i = 0;
	k = 0;
	res = ft_strlen (dst) + ft_strlen (src);
	if (ft_strlen (dst) >= dstsize)
		return (ft_strlen (src) + dstsize);
	while (dst[k])
		k++;
	while (src[i] && k < dstsize - 1)
	{
		dst[k] = src[i];
		k++;
		i++;
	}
	dst[k] = '\0';
	return (res);
}

// int main()
// {
// 	char dst1[15] = "Hello ";
// 	char src1[15] = "World!";
// 	char dst2[15] = "Hello ";
// 	char src2[15] = "World!";
// 	int n = 10;

// 	printf("My %zu\n", ft_strlcat(dst1,src1,n));
// 	printf("%s\n", dst1);

// 	printf("Original %lu\n", strlcat(dst2,src2, n));
// 	printf("%s\n", dst2);
// 	return (0);
// }