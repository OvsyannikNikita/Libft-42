/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:17:27 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/13 16:39:46 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main()
// {
// 	int c = 10;
// 	int result = ft_isalnum(c);
// 	printf("%d",result);
// }