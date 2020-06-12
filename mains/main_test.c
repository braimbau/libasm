#include <libc.h>

char * ft_strdup(const char * src);

int main()
{
	char *src = "salut";
	char *dst_1;
	char *dst_2;

	printf("src : %s\n", src);
	dst_2 = ft_strdup(src);
	dst_1 = strdup(src);
	printf("|%p|\n", dst_2);
	printf("strdup : dest : %s\n ft_strdup : dest : %s\n", dst_1, dst_2);
}
