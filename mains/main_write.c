#include <libc.h>

ssize_t  ft_write(int fildes, const void *buf, size_t nbyte);

int main(int argc, char **argv)
{
	(void)argc;
	int i = ft_write(1, argv[1], ft_strlen(argv[1]));
	printf("et bah write il a retourne %d/n", i);
}
