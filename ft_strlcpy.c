/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:43:02 by nikitos           #+#    #+#             */
/*   Updated: 2022/12/19 20:38:27 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize < 1)
	{
		return (j);
	}
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (j);
}

// int    main(void)
// {
//     char dst[15] = "HelloWorld!";
//     char dst2[15] = "HelloWorld!";

//     const char src[11] = "teststring";
//     int size = 10;
//     printf("mine : %zu\n", ft_strlcpy(dst, src, size));
//     printf("%s\n", dst);
//     printf("string.h : %zu\n", strlcpy(dst2, src, size));
//     printf("%s\n", dst2);
//     return (0);
// }