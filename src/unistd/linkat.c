/* @LICENSE(MUSLC_MIT) */

#include <unistd.h>
#include "internal/syscall.h"

int linkat(int fd1, const char *existing, int fd2, const char *new, int flag)
{
	return syscall(SYS_linkat, fd1, existing, fd2, new, flag);
}
