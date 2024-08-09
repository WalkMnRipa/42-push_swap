/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:10:25 by jcohen            #+#    #+#             */
/*   Updated: 2024/08/09 17:36:47 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_push_swap *ps;
	if (ac == 2)
		return (0);
	ps = init_push_swap(ac - 1);
	if (!ps)
		ft_cleanup_and_print_error(ps, "Error: Memory allocation failed");
	add_arguments_in_stack(ps, ac, av);

	free_push_swap(ps);
	return (0);
}