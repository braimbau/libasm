#include <libc.h>

size_t ft_strlen(const char *s);
char *ft_strcpy(char * dst, const char * src);
int ft_strcmp(const char *s1, const char *s2);
ssize_t    ft_read(int fd, void *buf, size_t nbyte);
ssize_t    ft_write(int fd, const void *buf, size_t nbyte);
char    *ft_strdup(const char *str);

int main()
{
	printf("test strlen\n");
    printf("strlen : %lu | ft_strlen : %lu\n", strlen(""), ft_strlen(""));
    printf("strlen : %lu | ft_strlen : %lu\n", strlen("b"), ft_strlen("b"));
    printf("strlen : %lu | ft_strlen : %lu\n", strlen("bonj"), ft_strlen("bonj"));
    printf("strlen : %lu | ft_strlen : %lu\n", strlen("bonjours"), ft_strlen("bonjours"));

    char dest[50];
    printf("test strcpy\n");
    printf("strcpy : %s | ft_strcpy : %s\n", strcpy(dest, ""),  ft_strcpy(dest, ""));
    printf("strcpy : %s | ft_strcpy : %s\n", strcpy(dest, "b"), ft_strcpy(dest, "b"));
    printf("strcpy : %s | ft_strcpy : %s\n", strcpy(dest, "bonj"), ft_strcpy(dest, "bonj"));
    printf("strcpy : %s | ft_strcpy : %s\n", strcpy(dest, "bonjours"), ft_strcpy(dest, "bonjours"));

    printf("test strcmp\n");
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("", "b"), ft_strcmp("", "b"));
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("", ""), ft_strcmp("", ""));
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("b", "p"), ft_strcmp("b", "p"));
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("bonj", "p"), ft_strcmp("bonj", "p"));
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("bonjours", "bonjours"), ft_strcmp("bonjours", "bonjours"));
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("bonjours", "bondours"), ft_strcmp("bonjours", "bondours"));
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("bonjours", "bonjour"), ft_strcmp("bonjours", "bonjour"));
    printf("strcmp : %d | ft_strcmp : %d\n", strcmp("aonjours", "bonjour"), ft_strcmp("aonjours", "bonjour"));

	printf("test write\n");
	int ret;
	int ft_ret;
	char *string = "Ca c'est une autre string de test definitivement trop longue";
	char *lorem = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed interdum ut magna ac lacinia. Aliquam vel imperdiet augue. Duis tristique magna id quam consequat consectetur. In sed quam ultrices, posuere elit ac, placerat justo. Fusce quis convallis magna. Curabitur scelerisque mi et diam congue dignissim. Cras tempus sem tellus, venenatis molestie sem porta ut. Curabitur sapien tellus, malesuada nec porta quis, facilisis quis magna. Nam vehicula purus sem, sed consequat dolor tempus sed. Cras at rhoncus risus, eu maximus velit. Curabitur non dolor lacus. Quisque semper commodo dictum.\n";
	char *str_courte = "i";
	ret = write(1, "Ceci est un test de la fonction write\n", 38);
	ft_ret = ft_write(1, "Ceci est un test de la fonction write\n", 38);
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, string, 20);
	printf("\n");
	ft_ret = ft_write(1, string, 20);
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, str_courte, 20);
	printf("\n");
	ft_ret = ft_write(1, str_courte, 20);
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, NULL, 10);
	printf("\n");
	ft_ret = ft_write(1, NULL, 10);
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, lorem , strlen(lorem));
	ft_ret = ft_write(1, lorem, strlen(lorem));
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, lorem, 0);
	printf("\n");
	ft_ret = ft_write(1, lorem, 0);
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(42000, lorem, 30);
	printf("\n");
	ft_ret = ft_write(42000, lorem, 30);
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);

	printf("test read\n");
	int fd;
	char buf[1000];
	fd = open("./files/test_1", O_RDONLY);
	buf[0] = 0;
	printf("read : %zd : %s\n", read(fd, buf, 10), buf);
	fd = open("./files/test_1", O_RDONLY);
	buf[0] = 0;
	printf("ft_read : %zd : %s\n", ft_read(fd, buf, 10), buf);
	fd = open("./files/test_2", O_RDONLY);
	buf[0] = 0;
	printf("read : %zd : %s\n", read(fd, buf, 10), buf);
	fd = open("./files/test_2", O_RDONLY);
	buf[0] = 0;
	printf("ft_read : %zd : %s\n", ft_read(fd, buf, 10), buf);
	fd = open("./files/test_3", O_RDONLY);
	buf[0] = 0;
	printf("read : %zd : %s\n", read(fd, buf, 10), buf);
	fd = open("./files/test_3", O_RDONLY);
	buf[0] = 0;
	printf("ft_read : %zd : %s\n", ft_read(fd, buf, 10), buf);
	fd = open("./files/test_4", O_RDONLY);
	buf[0] = 0;
	printf("read : %zd : %s\n", read(fd, buf, 10), buf);
	fd = open("./files/test_4", O_RDONLY);
	buf[0] = 0;
	printf("ft_read : %zd : %s\n", ft_read(fd, buf, 10), buf);
	fd = 42000;
	buf[0] = 0;
	printf("read : %zd : %s\n", read(fd, buf, 10), buf);
	fd = 42000;
	buf[0] = 0;
	printf("ft_read : %zd : %s\n", ft_read(fd, buf, 10), buf);

    printf("test strdup\n");
    printf("strdup : %s | ft_strdup : %s\n", strdup(""),  ft_strdup(""));
    printf("strdup : %s | ft_strdup : %s\n", strdup("b"), ft_strdup("b"));
    printf("strdup : %s | ft_strdup : %s\n", strdup("bonj"), ft_strdup("bonj"));
    printf("strdup : %s | ft_strdup : %s\n", strdup("bonjours"), ft_strdup("bonjours"));
}
