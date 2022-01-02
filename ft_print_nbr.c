#include "libftprintf.h"

static size_t	ft_count(int n)
{
    size_t	i;

    i = 0;
    if (n == 0)
        return (1);
    if (n < 0)
        i++;
    while (n != 0)
    {
        i++;
        n /= 10;
    }
    return (i);
}

int ft_print_nbr(int n)
{
    long int	n2;
    int i;

    i = ft_count(n);
    n2 = (long int)n;
    if (n2 < 0)
    {
        ft_print_char('-');
        n2 *= -1;
    }
    if (n2 / 10 != 0)
        ft_print_nbr(n2 / 10);
    ft_print_char((n2 % 10) + 48);
    return  (i);
}