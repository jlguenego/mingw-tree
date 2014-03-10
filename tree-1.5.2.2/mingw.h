typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned long u_long;
typedef unsigned int u_int;
#define lstat stat
#define S_IFSOCK 0140000 /* socket */
#define S_IFLNK 0120000 /* symbolic link */
#define S_ISUID 0004000 /* set user id on execution */
#define S_ISGID 0002000 /* set group id on execution */
#define S_ISVTX 0001000 /* save swapped text even after use */

ssize_t readlink(const char *path, char *buf, size_t bufsiz) {
	return -1;
}