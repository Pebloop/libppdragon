/*
** EPITECH PROJECT, 2020
** libdragon2
** File description:
** dg_system
*/

/*!
 * @file      dg_system.h
 * @author    Pebloop
 * @version   1.0
 * @date      27/09/2020
 * @brief     Define system related utilities.
 *
 * @details   Define system related utilities.
 *            define OS and options related stuffs.
 */

#ifndef DG_SYSTEM_H_
#define DG_SYSTEM_H_

#include <stdlib.h>
#include <stdint.h>

/*! \enum All the available OS */
typedef enum os {WINDOWS, LINUX} os_t;

// Windows
#ifdef _WIN32

#include <io.h>

/*! \brief Define write (see write official documentation) */
#define DG_WRITE(fd, buffer, len) _write(fd, buffer, len)

/*! \brief Define current OS */
const os_t OS = WINDOWS; 

#endif

// Linux
#ifdef linux

#include <unistd.h>

/*! \brief Define write (see write official documentation) */
#define DG_WRITE(fd, buffer, len) write(fd, buffer, len)

/*! \brief Define current OS */
const os_t OS = LINUX; 

#endif

// Epitech
#ifdef EPITECH

/*! \brief Define EPITECH restrictions */
const bool IS_EPITECH = true;

#else

/*! \brief Define EPITECH restrictions */
const bool IS_EPITECH = false;

#endif

// Debug
#ifdef DEBUG

/*! \brief Define debug output */
const bool DEBUG = true;

#else

/*! \brief Define debug output */
const bool DEBUG = false;

#endif

// General
/*! \brief Define malloc (see malloc official documentation) */
#define DG_MALLOC(size) malloc(size)
/*! \brief Define free (see free official documentation) */
#define DG_FREE(ptr) free(ptr)

#endif /* !DG_SYSTEM_H_ */
