/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:30:54 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/15 04:34:42 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

#include "cub3d.h"

# define TRUE 1
# define FALSE 0


# define KEY_ESC 53
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_LEFT 263
# define KEY_RIGHT 262
# define KEY_UP 265
# define KEY_DOWN 264


# define KEY_PRESS 2
# define KEY_RELEASE 3
# define KEY_EXIT 17

# define X_EVENT_KEY_PRESS 2
# define X_EVENT_KEY_RELEASE 3
# define X_EVENT_KEY_EXIT 17


# define TILE_SIZE 64
# define MAP_NUM_ROWS 15
# define MAP_NUM_COLS 15

# define WINDOW_WIDTH (MAP_NUM_COLS * TILE_SIZE)
# define WINDOW_HEIGHT (MAP_NUM_ROWS * TILE_SIZE)

# define FOV_ANGLE (60 * (M_PI / 180))

# define NUM_RAYS WINDOW_WIDTH

# define MINIMAP_SCALE_FACTOR 0.3

# define FPS 30
# define FRAME_TIME_LENGTH (1000 / FPS)

# define TEXTURE_WIDTH 64
# define TEXTURE_HEIGHT 64
# define NUM_TEXTURES 5

#endif