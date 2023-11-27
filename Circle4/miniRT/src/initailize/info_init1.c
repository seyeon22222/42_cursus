/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_init1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seykim <seykim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:00:07 by seykim            #+#    #+#             */
/*   Updated: 2023/11/27 18:20:06 by seykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minirt.h"

void	alight_init(t_alight *temp)
{
	temp->b_range = 0;
	temp->g_range = 0;
	temp->num = 0;
	temp->r_range = 0;
	temp->ratio = 0;
}

void	camera_init(t_camera *temp)
{
	temp->fov = 0;
	temp->num = 0;
	temp->x = 0;
	temp->y = 0;
	temp->z = 0;
}

void	cylinder_init(t_cylinder *temp)
{
	temp->b_range = 0;
	temp->delimeter = 0;
	temp->g_range = 0;
	temp->height = 0;
	temp->r_range = 0;
	temp->x = 0;
	temp->y = 0;
	temp->z = 0;
}
