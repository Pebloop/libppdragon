/*
** EPITECH PROJECT, 2020
** libdragon2
** File description:
** string
*/

/*!
 * @file      dg_string.h
 * @author    Pebloop
 * @version   1.0
 * @date      27/09/2020
 * @brief     Define strings related functions.
 *
 * @details   Define strings related functions.
 *            Some of them are EPITECH related.
 */

#ifndef STRING_H_
#define STRING_H_

#include "system/dg_system.h"

/*!
    @brief Get the length of @a str.
    @param str Char array to get the length from.
    @return The length of @a str.
*/
uint32_t dg_strlen(char *str);

#endif /* !STRING_H_ */
