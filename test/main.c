#include "../include/libasm.h"

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
	if (ret < 0)
		perror("message d'erreur de write");
	errno = 0;
	ft_ret = ft_write(1, "Ceci est un test de la fonction write\n", 38);
	if (ft_ret < 0)
		perror("message d'erreur d'ft_write");
	errno = 0;
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, string, 20);
	if (ret < 0)
		perror("message d'erreur de write");
	errno = 0;
	printf("\n");
	ft_ret = ft_write(1, string, 20);
	if (ft_ret < 0)
		perror("message d'erreur d'ft_write");
	errno = 0;
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, str_courte, 20);
	if (ret < 0)
		perror("message d'erreur de write");
	errno = 0;
	printf("\n");
	ft_ret = ft_write(1, str_courte, 20);
	if (ft_ret < 0)
		perror("message d'erreur d'ft_write");
	errno = 0;
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, NULL, 10);
	if (ret < 0)
		perror("message d'erreur de write");
	errno = 0;
	printf("\n");
	ft_ret = ft_write(1, NULL, 10);
	if (ft_ret < 0)
		perror("message d'erreur d'ft_write");
	errno = 0;
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, lorem , strlen(lorem));
	if (ret < 0)
		perror("message d'erreur de write");
	errno = 0;
	ft_ret = ft_write(1, lorem, strlen(lorem));
	if (ft_ret < 0)
		perror("message d'erreur d'ft_write");
	errno = 0;
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(1, lorem, 0);
	if (ret < 0)
		perror("message d'erreur de write");
	errno = 0;
	printf("\n");
	ft_ret = ft_write(1, lorem, 0);
	if (ft_ret < 0)
		perror("message d'erreur d'ft_write");
	errno = 0;
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);
	ret = write(42000, lorem, 30);
	if (ret < 0)
		perror("message d'erreur de write");
	errno = 0;
	printf("\n");
	ft_ret = ft_write(42000, lorem, 30);
	if (ft_ret < 0)
		perror("message d'erreur d'ft_write");
	errno = 0;
	printf("\n");
	printf("write : %d | ft_write : %d\n", ret, ft_ret);

	printf("test read\n");
	int fd;
	char buf[1000];
	fd = open("./test/file/file1", O_RDONLY);
	buf[0] = 0;
	printf("read: %d : %s\n", ret = read(fd, buf, 10), buf);
	if (ret < 0)
		perror("message d'erreur de read\n");
	errno = 0;
	fd = open("./test/file/file1", O_RDONLY);
	buf[0] = 0;
	printf("ft_read: %d : %s\n", ret = ft_read(fd, buf, 10), buf);
	if (ret < 0)
		perror("message d'erreur de ft_read\n");
	errno = 0;
	fd = open("./test/file/file3", O_RDONLY);
	buf[0] = 0;
	printf("read: %d : %s\n", ret = read(fd, buf, 15), buf);
	if (ret < 0)
		perror("message d'erreur de read\n");
	errno = 0;
	fd = open("./test/file/file3", O_RDONLY);
	buf[0] = 0;
	printf("ft_read: %d : %s\n", ret = ft_read(fd, buf, 15), buf);
	if (ret < 0)
		perror("message d'erreur de ft_read\n");
	errno = 0;
	fd = open("./test/file/file2", O_RDONLY);
	buf[0] = 0;
	printf("read: %d : %s\n", ret = read(fd, buf, 15), buf);
	if (ret < 0)
		perror("message d'erreur de read\n");
	errno = 0;
	fd = open("./test/file/file2", O_RDONLY);
	buf[0] = 0;
	printf("ft_read: %d : %s\n", ret = ft_read(fd, buf, 15), buf);
	if (ret < 0)
		perror("message d'erreur de ft_read\n");
	errno = 0;
	fd = open("./file/test_4", O_RDONLY);
	buf[0] = 0;
	printf("read: %d : %s\n", ret = read(fd, buf, 10), buf);
	if (ret < 0)
		perror("message d'erreur de read\n");
	errno = 0;
	fd = open("./file/test_4", O_RDONLY);
	buf[0] = 0;
	printf("ft_read: %d : %s\n", ret = ft_read(fd, buf, 10), buf);
	if (ret < 0)
		perror("message d'erreur de ft_read\n");
	errno = 0;
	fd = 42000;
	buf[0] = 0;
	printf("read: %d : %s\n", ret = read(fd, buf, 10), buf);
	if (ret < 0)
		perror("message d'erreur de read\n");
	errno = 0;
	fd = 42000;
	buf[0] = 0;
	printf("ft_read: %d : %s\n", ret = ft_read(fd, buf, 10), buf);
	if (ret < 0)
		perror("message d'erreur de ft_read\n");
	errno = 0;

    printf("test strdup\n");
    printf("strdup : %s | ft_strdup : %s\n", strdup(""),  ft_strdup(""));
    printf("strdup : %s | ft_strdup : %s\n", strdup("b"), ft_strdup("b"));
    printf("strdup : %s | ft_strdup : %s\n", strdup("bonj"), ft_strdup("bonj"));
    printf("strdup : %s | ft_strdup : %s\n", strdup("bonjours"), ft_strdup("bonjours"));
}
