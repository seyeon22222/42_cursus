/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus_func6.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seykim <seykim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:25:24 by seykim            #+#    #+#             */
/*   Updated: 2023/05/19 17:38:03 by seykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_b(t_list **push_swap, int flag)
{
	t_list	*last;
	t_list	*prev;

	if (*push_swap == NULL || (*push_swap)->next == NULL)
		return ;
	last = *push_swap;
	prev = NULL;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ft_lstadd_front(push_swap, last);
	if (flag == 0)
		write(1, "rra\n", 4);
}

void	rrb_b(t_list **push_swap, int flag)
{
	t_list	*last;
	t_list	*prev;

	if (*push_swap == NULL || (*push_swap)->next == NULL)
		return ;
	last = *push_swap;
	prev = NULL;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ft_lstadd_front(push_swap, last);
	if (flag == 0)
		write(1, "rrb\n", 4);
}

void	rrr_b(t_list **push_swap, t_list **push_swap2, int flag)
{
	if (*push_swap == NULL || (*push_swap)->next == NULL \
	|| *push_swap2 == NULL || (*push_swap2)->next == NULL)
		return ;
	rra_b(push_swap, 1);
	rrb_b(push_swap2, 1);
	if (flag == 0)
		write(1, "rrr\n", 4);
}
