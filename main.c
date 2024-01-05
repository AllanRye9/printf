#include "ft_printf.h"

int	main()
{
    int x = -100;
    unsigned int p = 1000;
    char c = 'c';
    int y = -2451;
    unsigned long k = 1255522225552;
    unsigned long w = 1255522225552;
    char d[] = "hello world today";
    char t = '%';
    char a[] = "hello";
	ft_printf("%s\n", d);
    ft_printf("%d\n", x);
    ft_printf("%i\n", y);
    ft_printf("%c\n", c);
    ft_printf("%u\n", p);
    ft_printf("%x\n", k);
    ft_printf("%X\n", w);
    ft_printf("%%\n", t);
    ft_printf("%p\n", a);
    ft_printf("%X\n", 55952632);
    ft_printf("%x\n", 665412684511);
    ft_printf("%i\n", 45);
return (0);
}
