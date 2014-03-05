#ifndef _MEMINFO_H_
#define _MEMINFO_H_

#include "config.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

  struct memory_snapshot
  {
    unsigned long used;
    unsigned long total;
    unsigned long free;
    unsigned long shared;
    unsigned long buffers;
    unsigned long cached;
  };

#define SU(X) ( ((unsigned long long)(X) << 10) >> shift ), units

  void get_meminfo (bool, struct memory_snapshot **);
  void mempaginginfo (unsigned long *, unsigned long *);

  void swapinfo (unsigned long *, unsigned long *, unsigned long *,
		     unsigned long *);
  void swappaginginfo (unsigned long *, unsigned long *);

#ifdef __cplusplus
}
#endif

#endif				/* _MEMINFO_H_ */
