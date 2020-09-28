/*
** EPITECH PROJECT, 2020
** libdragon2
** File description:
** dg_dragon
*/

/*!
 * @file      dg_window.h
 * @author    Pebloop
 * @version   1.0
 * @date      27/09/2020
 * @brief     Define window related functions.
 *
 * @details   Define window related functions.
 */


#ifndef DG_DRAGON_H_
#define DG_DRAGON_H_

#include "system/dg_system.h"
#include "dragon/dg_utils.h"

/*! launched when window initialized */
typedef void *(*dg_init_t)(struct dg_window *window, void *data);
/*! launched before window first loop */
typedef void (*dg_start_t)(struct dg_window *window, void *data);
/*! launched while window run, after \a dg_start_t */
typedef void (*dg_loop_t)(struct dg_window *window, void *data, uint64_t dt);
/*! launched when window end, after \a dg_loop_t */
typedef uint32_t (*dg_end_t)(struct dg_window *window, void *data);

/*!
*   @brief Define the size and pixels of the video
*
*   @details The video mode define the size of the window in pixel,
*   and the number of bits per pixels (number of colours per pixels).
*   if you don't know what to use, choose 32 bpp.
*   @param width (ussigned int) in pixel.
*   @param height (ussigned int) in pixel.
*   @param bpp (ussigned int) bit per pixel (32 by default).
*/
typedef struct dg_video_mode {
    uint32_t width;
    uint32_t height;
    uint32_t bpp;
} dg_video_mode_t;

/*!
*   @brief Define the rendering data of the window.
*   \param mode is the screen size and bpp (see dg_video_mode_t)
*   \param name is the title of the window displayed at the top of the window.
*   \param ptr link the rendering to the sub library (do not modify !).
*/
typedef struct dg_render_window {
    dg_video_mode_t mode;
    const char *name;
    void *ptr;
} dg_render_window_t;

/*!
*   @brief Define the window cycle functions.
*   \param init (dg_init_t) Launched when the window is initialized.
*   \param start (dg_start_t) Launched before the window first loop.
*   \param loop (dg_loop_t) Launched while the window run, after \a dg_start_t.
*   \param end (dg_end_t) Launched when the window end, after \a dg_loop_t.
*/
typedef struct dg_window_cycle
{
    dg_init_t init;
    dg_start_t start;
    dg_loop_t loop;
    dg_end_t end;
} dg_window_cycle_t;

/*!
*   @brief Define the window and its datas.
*   \param window (dg_render_window_t *) The rendering datas.
*   \param cycle (dg_window_cycle_t) The window cycle.
*/
typedef struct dg_window
{
    dg_render_window_t *window;
    dg_window_cycle_t cycle;
} dg_window_t;

#endif /* !DG_DRAGON_H_ */
