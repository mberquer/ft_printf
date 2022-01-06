#include "ft_printf.h"

int ft_print_str(char *s)
{
	if (s)
	{
		int i;

		i = 0;
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		return (i);
	}
	return(ft_print_str("(null)"));
}
