/*
 * Compatibility definitions for ca_pid_t / CA_SET_PID, which were
 * removed from <linux/dvb/ca.h> in Linux kernel 4.14.
 */

#ifndef ___CA_COMPAT_H
#define ___CA_COMPAT_H

#include <linux/dvb/ca.h>
#include <linux/ioctl.h>

#ifndef CA_SET_PID
typedef struct ca_pid {
  unsigned int pid;
  int index;      /* -1 == disable */
} ca_pid_t;

#define CA_SET_PID _IOW('o', 135, ca_pid_t)
#endif

#endif // ___CA_COMPAT_H
