#include <libc.h>

int ft_strcmp(const char *s1, const char *s2);

int main(int ac, char **av)
{
	printf("the diff is %d : %d \n", strcmp(av[1], av[2]), ft_strcmp(av[1], av[2]));
	if ( strcmp(av[1], av[2]) == ft_strcmp(av[1], av[2]))
		printf("GG!\n");
}
