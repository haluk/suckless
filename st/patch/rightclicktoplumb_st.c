#if defined(__OpenBSD__)
 #include <sys/sysctl.h>
#endif

int
subprocwd(char *path)
{
#if   defined(__linux)
	if (snprintf(path, PATH_MAX, "/proc/%d/cwd", pid) < 0)
		return -1;
	return 0;
#endif
}
