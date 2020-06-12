#include <libc.h>

int ft_strcmp(const char *str1, const char *str2);

int main()
{
printf(" \"bonjours\" \"bonjours\" strcmp :  %d ft_strcmp : %d\n", strcmp("bonjours","bonjours"),ft_strcmp("bonjours","bonjours"));
printf(" \"bonjours\" \"bonj\" strcmp :  %d ft_strcmp : %d\n", strcmp("bonjours","bonj"),ft_strcmp("bonjours","bonj"));
printf(" \"bonj\" \"bonjours\" strcmp :  %d ft_strcmp : %d\n", strcmp("bonj","bonjours"),ft_strcmp("bonj","bonjours"));
printf(" \"bondours\" \"bonjours\" strcmp :  %d ft_strcmp : %d\n", strcmp("bondours","bonjours"),ft_strcmp("bondours","bonjours"));
printf(" \"\" \"\" strcmp :  %d ft_strcmp : %d\n", strcmp("",""),ft_strcmp("",""));
printf(" \"bonjours\" \"\" strcmp :  %d ft_strcmp : %d \n", strcmp("bonjours",""),ft_strcmp("bonjours",""));
printf(" \"\" \"bonjours\" strcmp :  %d ft_strcmp : %d \n", strcmp("","bonjours"),ft_strcmp("","bonjours"));
}
