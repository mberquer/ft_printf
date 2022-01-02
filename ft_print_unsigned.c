#include "libftprintf.h"

static int  ft_count(unsigned int n)
{
    size_t	i;

    i = 0;
    if (n == 0)
        return (1);
    while (n != 0)
    {
        i++;
        n /= 10;
    }
    return (i);
}

int ft_print_unsigned(unsigned int  n)
{
    int i;

    i = ft_count(n);
    if (n / 10 != 0)
        ft_print_unsigned(n / 10);
    ft_print_char((n % 10) + 48);
    return (i);
}