/*
** EPITECH PROJECT, 2020
** libdragon2
** File description:
** dg_strlen
*/

/*!
 * @file      dg_strlen.c
 * @author    Pebloop
 * @version   1.0
 * @date      27/09/2020
 * @brief     Define dg_strlen function.
 *
 * @details   Define dg_strlen function.
 *            Return the length of @a str.
 */

#include "system/dg_system.h"

/*!
    @date 27/09/2020
*/
uint32_t dg_strlen(char *str)
{
    uint32_t size = 0;

    if (!str) {
        if (DEBUG)
            DG_WRITE(2, "WARNING : dg_strlen : str is NULL\n", 34);
        return 0;
    }
    for (size = 0; str[size]; size++);
    return size;
}