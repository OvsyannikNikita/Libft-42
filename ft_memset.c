/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:05:41 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/23 11:18:37 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte;

	byte = b;
	while (len--)
	{
		*byte = c;
		byte++;
	}
	return (b);
}

// int main()
// {
// 	char str1[10] = "hello";
// 	char str2[10] = "hello";
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	ft_memset(str1,'a',4);
// 	memset(str2,'a',4);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	return(0);
// }