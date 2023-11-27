/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seykim <seykim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:23:06 by seykim            #+#    #+#             */
/*   Updated: 2023/11/27 19:45:29 by seykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minirt.h"

static void	plane_check2(char **split, int idx, t_plane *pl_temp);
static void	plane_check3(char *str, t_plane *temp);
static void	plane_check4(char *str, t_plane *temp);
static void	plane_check5(char *str, t_plane *temp);

void	plane_check(t_list *temp, char *arr, int idx)
{
	char	**split;
	t_plane	*pl_temp;

	pl_temp = (t_plane *)malloc(sizeof(t_plane));
	if (!pl_temp)
		print_error("No space to malloc plane");
	plane_init(pl_temp);
	split = ft_split(arr, 32);
	plane_check2(split, idx, pl_temp);
	free_split(split);
	if (!temp->content)
	{
		ft_lstdelone(temp, free);
		temp = ft_lstnew(pl_temp, plane);
	}
	else
		ft_lstadd_back(&temp, ft_lstnew(pl_temp, plane));
}

static void	plane_check2(char **split, int idx, t_plane *pl_temp)
{
	while (split[idx])
	{
		if (idx == 1)
			plane_check3(split[idx], pl_temp);
		else if (idx == 2)
			plane_check4(split[idx], pl_temp);
		else if (idx == 3)
			plane_check5(split[idx], pl_temp);
		idx++;
	}
}

static void	plane_check3(char *str, t_plane *temp)
{
	char	**split;
	int		idx;
	float	num;

	split = ft_split(str, ',');
	idx = 0;
	while (split[idx])
	{
		num = ft_atof(split[idx]);
		if (idx == 0)
			temp->x = num;
		else if (idx == 1)
			temp->y = num;
		else if (idx == 2)
			temp->z = num;
		idx++;
	}
	free_split(split);
}

static void	plane_check4(char *str, t_plane *temp)
{
	char	**split;
	int		idx;
	float	num;

	split = ft_split(str, ',');
	idx = 0;
	while (split[idx])
	{
		num = ft_atof(split[idx]);
		if (num > 1 || num < -1)
			print_error("Plane Vector Range error");
		else
		{
			if (idx == 0)
				temp->pl_vec.x = num;
			else if (idx == 1)
				temp->pl_vec.y = num;
			else if (idx == 2)
				temp->pl_vec.z = num;
		}
		idx++;
	}
	free_split(split);
}

static void	plane_check5(char *str, t_plane *temp)
{
	char	**split;
	int		idx;
	float	num;

	split = ft_split(str, ',');
	idx = 0;
	while (split[idx])
	{
		num = ft_atoi(split[idx]);
		if (num > 255 || num < 0)
			print_error("Plane R,G,B Range error");
		else
		{
			if (idx == 0)
				temp->r_range = num;
			else if (idx == 1)
				temp->g_range = num;
			else if (idx == 2)
				temp->b_range = num;
		}
		idx++;
	}
	free_split(split);
}
