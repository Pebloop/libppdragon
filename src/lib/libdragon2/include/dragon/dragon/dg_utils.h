/*
** EPITECH PROJECT, 2020
** libdragon2
** File description:
** dg_utils
*/

/*!
 * @file      dg_utils.h
 * @author    Pebloop
 * @version   1.0
 * @date      27/09/2020
 * @brief     Define utilitaries.
 *
 * @details   Define utilitaries.
 *            Mostly structures.
 */

#ifndef DG_UTILS_H_
#define DG_UTILS_H_

#include "system/dg_system.h"

/*!
*   @brief Define a 2D vector.
*   @param x (int)
*   @param y (int)
*/
typedef struct dg_vector2 {
    int32_t x;
    int32_t y;
} dg_vector2_t;

/*!
*   @brief Define a 3D vector.
*   @param x (int)
*   @param y (int)
*   @param z (int)
*/
typedef struct dg_vector3 {
    int32_t x;
    int32_t y;
    int32_t z;
} dg_vector3_t;

/*!
*   @brief Define a 4D vector.
*   @param x (int)
*   @param y (int)
*   @param z (int)
*   @param w (int)
*/
typedef struct dg_vector4 {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t w;
} dg_vector4_t;

/*!
*   @brief Define a rectangle.
*   @param x (int)
*   @param y (int)
*   @param width (int)
*   @param height (int)
*/
typedef struct dg_rect {
    int32_t x;
    int32_t y;
    int32_t width;
    int32_t height;
} dg_rect_t;

/*!
*   @brief Define a circle.
*   @param x (int)
*   @param y (int)
*   @param radius (int)
*/
typedef struct dg_circle {
    int32_t x;
    int32_t y;
    int32_t radius;
} dg_circle_t;

/*!
*   @brief Define a sphere.
*   @param x (int)
*   @param y (int)
*   @param z (int)
*   @param radius (int)
*/
typedef struct dg_sphere {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t radius;
} dg_sphere_t;

/*!
*   @brief Define a rectangle prism.
*   @param x (int)
*   @param y (int)
*   @param z (int)
*   @param width (int)
*   @param height (int)
*   @param depth (int)
*/
typedef struct dg_rect3 {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t width;
    int32_t height;
    int32_t depth;
} dg_rect3_t;

/*!
*   @brief Define a 2D transform.
*   @param pos (dg_vector2_t) position
*   @param scale (dg_vector2_t) scale
*   @param rot (dg_vector2_t) rotation
*/
typedef struct dg_transform2 {
    dg_vector2_t pos;
    dg_vector2_t scale;
    dg_vector2_t rot;
} dg_transform2_t;

/*!
*   @brief Define a 3D transform.
*   @param pos (dg_vector3_t) position
*   @param scale (dg_vector3_t) scale
*   @param rot (dg_vector3_t) rotation
*/
typedef struct dg_transform3 {
    dg_vector3_t pos;
    dg_vector3_t scale;
    dg_vector3_t rot;
} dg_transform3_t;

#endif /* !DG_UTILS_H_ */
