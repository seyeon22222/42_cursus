/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seykim <seykim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:43:22 by seykim            #+#    #+#             */
/*   Updated: 2023/11/24 19:46:01 by seykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minirt.h"

t_mlx	*my_mlx_init(int low, int col, int num, t_info *info)
{
	t_mlx	*temp_mlx;

	temp_mlx = (t_mlx *)malloc(sizeof(t_mlx));
	if (!temp_mlx)
		print_error("No space to malloc mlx");
	temp_mlx->mlx = mlx_init();
	temp_mlx->win = mlx_new_window(temp_mlx->mlx, low, col, "MiniRT");
	temp_mlx->data = (t_data *)malloc(sizeof(t_data) * num);
	data_init(temp_mlx, num, info);
	return (temp_mlx);
}

void	data_init(t_mlx *temp_mlx, int num, t_info *info)
{
	int	i;

	i = 0;
	while (i < num)
	{
		temp_mlx->data[i].img = mlx_new_image(temp_mlx, );
		i++;
	}
}

int	key_press(int keycode, t_info *info)
{
	if (keycode == KEY_ESC)
	{
		mlx_destroy_window(info->my_mlx->mlx, info->my_mlx->win);
		exit(0);
	}
	return (0);
}

int	click_key(t_info *info)
{
	mlx_destroy_window(info->my_mlx->mlx, info->my_mlx->win);
	exit(0);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
