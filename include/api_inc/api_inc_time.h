#ifndef __API_INC_TIME_H__
#define __API_INC_TIME_H__

#include <cs_types.h>

/*#################      time      #################################*/
typedef long         clock_t;
typedef struct timeval {
    long long    tv_sec;         /* seconds */
    long         tv_usec;        /* and microseconds!!!but millisecond instead here(实际数据是ms)!! */
}timeval_t;

typedef struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
}timezone_t;

#endif
