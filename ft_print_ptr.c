#include "libftprintf.h"

int ft_print_ptr(void *p)
{
	ft_print_str("0x");
	ft_put_ptr(p);

}
