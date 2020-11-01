/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 04:23:31 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/01 04:38:13 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int j;
	int result;

	i = 0;

	while (str[i] != '\0')
	{
		if ( str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		{
			i++;
		}
		else if (str[i] == '-')
		{
			i++;
		}
		else if (str[i] == '+')
		{
			i++;
		}
		else if ('0' <= str[i] && str[i] <= '9')
		{
			result = str[i];
			i++;
		}
	}
	return (result);
}
