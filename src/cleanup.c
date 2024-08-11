/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:42:50 by jcohen            #+#    #+#             */
/*   Updated: 2024/08/09 19:31:55 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_push_swap(t_push_swap *ps)
{
	if (ps)
	{
		if (ps->a)
		{
			free(ps->a->stack);
			free(ps->a);
		}
		if (ps->b)
		{
			free(ps->b->stack);
			free(ps->b);
		}
		free(ps);
	}
}

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
