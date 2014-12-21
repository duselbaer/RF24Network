/*
 Copyright (C) 2011 James Coliz, Jr. <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

#pragma once

#if defined __MSP430__
# define IF_SERIAL_DEBUG(x)
# define snprintf_P snprintf
  typedef char const prog_char;
  typedef uint16_t prog_uint16_t;
# define PSTR(x) (x)
# define printf_P printf
# define strlen_P strlen
# define PROGMEM
# define pgm_read_word(p) (*(p)) 
# define PRIPSTR "%s"
#elif defined ARDUINO

#else
# define IF_SERIAL_DEBUG(x)
# define snprintf_P snprintf
  typedef char const prog_char;
  typedef uint16_t prog_uint16_t;
# define PSTR(x) (x)
# define printf_P printf
# define strlen_P strlen
# define PROGMEM
# define pgm_read_word(p) (*(p)) 
# define PRIPSTR "%s"
#endif
