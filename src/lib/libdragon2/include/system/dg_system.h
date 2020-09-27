/*
** EPITECH PROJECT, 2020
** libdragon2
** File description:
** dg_system
*/

#ifndef DG_SYSTEM_H_
#define DG_SYSTEM_H_

#include <stdlib.h>
#include <stdint.h>

typedef enum os {WINDOWS, LINUX} os_t;

// Windows
#ifdef _WIN32

#include <io.h>

#define DG_WRITE(fd, buffer, len) _write(fd, buffer, len)

const os_t OS = WINDOWS; 

#endif

// Linux
#ifdef linux

#include <unistd.h>

#define DG_WRITE(fd, buffer, len) write(fd, buffer, len)

const os_t OS = LINUX; 

#endif

// Epitech
#ifdef EPITECH

const bool IS_EPITECH = true;

#else

const bool IS_EPITECH = false;

#endif

// Debug
#ifdef DEBUG

const bool DEBUG = true;

#else

const bool DEBUG = false;

#endif

// General
#define DG_MALLOC(size) malloc(size)
#define DG_FREE(ptr) free(ptr)

#endif /* !DG_SYSTEM_H_ */
