#include <libc.h>

size_t ft_strlen(const char *str);

int main(int argc, char **argv)
{
	(void)argc;
	int i = (int) ft_strlen(argv[1]);
	printf("%s a %d caracteres\n", argv[1], i);
}
