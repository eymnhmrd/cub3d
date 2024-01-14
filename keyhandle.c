/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhandle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 04:23:52 by ahamrad           #+#    #+#             */
/*   Updated: 2024/01/14 05:34:18 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/cub3d.h"

void    close_window(t_cub *cub)
{
    mlx_close_window(cub->mlx.mlx);
    exit(EXIT_SUCCESS);
}

void move_player(t_cub *cub, int r, int w)
{
    int  i;
    int  j;
    
    cub->player.angle += 10 * (M_PI / 180) * r;
    if (cub->player.angle < 0)
       cub->player.angle += 2 * M_PI;
    if (cub->player.angle > 2 * M_PI)
       cub->player.angle -= 2 * M_PI;
    j = cub->player.x + (cos(cub->player.angle) * 10 * w);
    i = cub->player.y + (sin(cub->player.angle) * 10 * w);
    if (cub->map.store_map[(i / TILE_SIZE)][(j / TILE_SIZE)] == '1')
        return ;
    cub->player.x = j;
    cub->player.y = i;
    draw(cub);
    draw_player(cub);
    raycaster(cub);
}

void keyhandle(mlx_key_data_t key_data, void *cub)
{
    if (key_data.key == 256)
        close_window(cub);
    if (key_data.key == 265)
        move_player(cub, 0, 1);
    if (key_data.key == 264)
        move_player(cub, 0, -1);
    if (key_data.key == 263)
        move_player(cub, -1, 0);
    if (key_data.key == 262)
        move_player(cub, 1, 0);
    // mlx_delete_image(p->mlx.mlx, p->mlx.img.img);
}