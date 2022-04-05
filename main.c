#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"
#include <stdio.h>

int main()
{
	ft_printf("\n%d\n", 8);
	ft_putnbr_base(8, "01");
	ft_printf("\n%d\n", 1);
	ft_putnbr_base(1, "01");
	ft_printf("\n%d\n", 5);
	ft_putnbr_base(5, "01");
	ft_printf("\n%d\n", 2);
	ft_putnbr_base(2, "01");
	ft_printf("\n%d\n", 87);
	ft_putnbr_base(87, "01");
}
