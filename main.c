#include "ft_printf.h"

int	main()
{
	char *str;
	char er;
    int age = 25;
    char *point;
    int x, y, k, p, c;

	str = &er;
	str = "hello, worldz";
    point = "abc";
    x = 7;
    y =12;
    k = 9;
    p = 5;
    c = 24;
    ft_printf ( "I am %d years old\n", age );
	ft_printf ( "I am %d\n", 0 );
	ft_printf ("%d",-7);
	ft_printf("%x\n",1560133635);
	ft_printf("%x\n",98855);
	ft_printf ("%d\n",-2035065302);
	ft_printf ( "I am %d years old\n", age );
	ft_printf ( "I am %d years old\n", age );
	printf ( "x is %d and y is %d k is %d and p is %d\n", x, y, k, p );
	ft_printf ( "the address %p is here\n", *point );
	ft_printf ( "the address %p, %p, %p,is here\n", NULL, NULL, NULL );
	c = ft_printf ( "I am %d years old\n", age );
	printf ( "Number is %d \n", c );
	ft_printf ( "Number is %d \n", c );
	int w = ft_printf("\n---\n%c\n---\n%s\n%d\n%i\n%p\n%u\n%x\n%X", 'a', "string", 42, 42, &er, -42, 5,5);
	int t = printf("\n---\n%c\n---\n%s\n%d\n%i\n%p\n%u\n%x\n%X", 'a', "string", 42, 42, &er, -42, 5,5);
	// printf("%c", NULL);
	 printf("\n\n\n\nft res = %d\nprint res = %d\n", w, t);
return (0);
}
