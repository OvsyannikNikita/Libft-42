/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:44:52 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/19 20:27:01 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && i < len)
	{
		k = 0;
		while (*(haystack + i + k) == *(needle + k) && i + k < len)
		{
			if (*(needle + k + 1) == 0)
			{
				return ((char *)(haystack + i));
			}
			k++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Baz";
// 	char *ptr1;
// 	char *ptr2;

//     ptr1 = ft_strnstr(largestring, smallstring, 11);
// 	ptr2 = strnstr(largestring, smallstring, 11);
// 	printf("%s\n",ptr1);
// 	printf("%s\n",ptr2);
// }