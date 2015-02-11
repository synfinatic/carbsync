/* 
 * Copyright 2015 (c) Aaron Turner
 * This code is released under the GPLv3 license.  Please see the LICENSE file 
 * for details.
 *
 * More information is available here: https://github.com/synfinatic/carbsync
 */

#ifndef UTILS_H
#define UTILS_H

void serial_printf(const char *fmt, ... );
void dbg_serial_printf(const char *fmt, ... );
char *ftoa(char *a, double f, int precision);

#endif
