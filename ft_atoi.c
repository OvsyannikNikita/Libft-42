/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:31:54 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/23 11:41:58 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

// int main()
// {
// 	char *str1 = "12135421242144214211";
// 	char *str2 = "12135421242144214211";
// 	int result1;
// 	int result2;

// 	result1 = ft_atoi(str1); 
// 	printf("%d\n", result1);
// 	result2 = atoi(str2); 
// 	printf("%d", result2);
// }