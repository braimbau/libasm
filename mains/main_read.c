#include <libc.h>

ssize_t ft_read(int fildes, void *buf, size_t nbyte);

int main(int ac, char **argv)
{
	(void)ac;
char    buffer[33];
    char    buffer1[33];
    int        r;
    int        r1;

    int        fd;
    int        fd1;
    fd = open(argv[1], O_RDONLY);
    fd1 = open(argv[1], O_RDONLY);
    r = read(fd, buffer, 10);
    r1 = ft_read(fd1, buffer1, 10);
    buffer[r] = 0;
    buffer1[r1] = 0;
    printf("   read,  r : %d,  buffer : %s\n", r, buffer);
    printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
}
