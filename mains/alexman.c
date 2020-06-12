int main()
{
printf("### FT_STRCMP ###\n");
    int ret = strcmp("bonjour", "bonjour");
    printf("ret    strcmp : %d\n", ret);
    ret = ft_strcmp("bonjour", "bonjour");
    printf("ret ft_strcmp : %d\n", ret);
    ret = strcmp("bonj", "bonjour");
    printf("ret    strcmp : %d\n", ret);
    ret = ft_strcmp("bonj", "bonjour");
    printf("ret ft_strcmp : %d\n", ret);
    ret = strcmp("bonjour", "bonj");
    printf("ret    strcmp : %d\n", ret);
    ret = ft_strcmp("bonjour", "bonj");
    printf("ret ft_strcmp : %d\n", ret);
    ret = strcmp("bonjkur", "bonjour");
    printf("ret    strcmp : %d\n", ret);
    ret = ft_strcmp("bonjkur", "bonjour");
    printf("ret ft_strcmp : %d\n", ret);
    ret = strcmp("", "");
    printf("ret    strcmp : %d\n", ret);
    ret = ft_strcmp("", "");
    printf("ret ft_strcmp : %d\n", ret);
    ret = strcmp("\xff", "\xff\xfe");
    printf("ret    strcmp : %d\n", ret);
    ret = ft_strcmp("\xff", "\xff\xfe");
    printf("ret ft_strcmp : %d\n", ret);
}
