int main()
{
	printf(" test strlen\n");
    printf("%d\n", ft_strlen(""));
    printf("%d\n", ft_strlen("b"));
    printf("%d\n", ft_strlen("bonj"));
    printf("%d\n", ft_strlen("bonjours"));

    char dest[50];
    printf("test strcpy\n");
    printf("%s\n", ft_strcpy(dest, ""));
    printf("%s\n", ft_strcpy(dest, "b"));
    printf("%s\n", ft_strcpy(dest, "bonj"));
    printf("%s\n", ft_strcpy(dest, "bonjours"));

    printf("test strcmp\n");
    printf("%d\n", ft_strcmp("", "b"));
    printf("%d\n", ft_strcmp("b", "p"));
    printf("%d\n", ft_strcmp("bonj", "p"));
    printf("%d\n", ft_strcmp("bonjours", "bondours"));
}
