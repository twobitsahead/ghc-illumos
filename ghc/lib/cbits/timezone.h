#ifndef TIMEZONE_H
#define TIMEZONE_H

#define _OSF_SOURCE

#if TIME_WITH_SYS_TIME
# include <sys/time.h>
# include <time.h>
#else
# if HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif

#if HAVE_TM_ZONE
#define ZONE(x)	         (((struct tm *)x)->tm_zone)
#define SETZONE(x,z)     (((struct tm *)x)->tm_zone = z)
#define GMTOFF(x)        (((struct tm *)x)->tm_gmtoff)
#else 
#if HAVE_TZNAME
extern char *tzname[2];
#define ZONE(x)	    	 (((struct tm *)x)->tm_isdst ? tzname[1] : tzname[0])
#define SETZONE(x,z)
#else
/* We're in trouble. If you should end up here, please report this as a bug. */
#error Dont know how to get at timezone name on your OS.
#endif
/* Get the offset in secs from UTC, if (struct tm) doesn't supply it. */
extern time_t timezone;
#if HAVE_ALTZONE
extern time_t altzone;
#define GMTOFF(x)   	 (((struct tm *)x)->tm_isdst ? altzone : timezone)
#else
/* Assume that DST offset is 1 hour ... */
#define GMTOFF(x) (((struct tm *)x)->tm_isdst ? (timezone - 3600) : timezone)
#endif
#endif

#endif
