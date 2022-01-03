/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:54:35 by mberquer          #+#    #+#             */
/*   Updated: 2022/01/03 12:15:37 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_hexa(unsigned int n, char f)
{
	const char *base1 = "0123456789abcdef";
	const char *base2 = "0123456789ABCDEF";

	if (f = 'x')
	{
		ft_put_hexa(n, basse1);
	}
	else if (f = 'X')
	{
		ft_put_hexa(n, base2);
	}
	return (count(n));
}
