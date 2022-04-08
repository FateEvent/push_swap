#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"
#include <stdio.h>

int main()
{
	/*
	ft_printf("%d\n", 8);
	ft_putnbr_base(8, "01");
	ft_putchar('\n');
	ft_putnbr_base(8 >> 1, "01");
	ft_printf("\n%d\n", 8 >> 1);

	ft_printf("%d\n", 5);
	ft_putnbr_base(5, "01");
	ft_putchar('\n');
	ft_putnbr_base(5 >> 2, "01");
	ft_printf("\n%d\n", 5 >> 2);

	ft_printf("%d\n", 36);
	ft_putnbr_base(36, "01");
	ft_putchar('\n');
	ft_putnbr_base(36 >> 2, "01");
	ft_printf("\n%d\n", 36 >> 2);

	ft_printf("%d\n", 2);
	ft_putnbr_base(2, "01");
	ft_putchar('\n');
	ft_putnbr_base(2 >> 4, "01");
	ft_printf("\n%d\n", 2 >> 4);

	ft_printf("%d\n", 87);
	ft_putnbr_base(87, "01");
	ft_putchar('\n');
	ft_putnbr_base(87 >> 3, "01");
	ft_printf("\n%d\n", 87 >> 3);

	ft_printf("%d, %d\n", 5, 6);
	ft_putnbr_base(5, "01");
	ft_putchar('\n');
	ft_putnbr_base(6, "01");
	ft_putchar('\n');
	ft_putnbr_base(5&6, "01");
	ft_printf("\n%d\n", 5&6);

	ft_printf("%d, %d\n", 5, 6);
	ft_putnbr_base(5, "01");
	ft_putchar('\n');
	ft_putnbr_base(6, "01");
	ft_putchar('\n');
	ft_putnbr_base(5 & 6, "01");
	ft_putchar('\n');
	ft_printf("%d\n", 5 & 6);

	ft_printf("%d, %d\n", 2, 5);
	ft_putnbr_base(2, "01");
	ft_putchar('\n');
	ft_putnbr_base(5, "01");
	ft_putchar('\n');
	ft_putnbr_base(2 & 5, "01");
	ft_printf("\n%d\n", 2 & 5);

	ft_printf("%d, %d\n", 15, 9);
	ft_putnbr_base(15, "01");
	ft_putchar('\n');
	ft_putnbr_base(9, "01");
	ft_putchar('\n');
	ft_putnbr_base(15 & 9, "01");
	ft_printf("\n%d\n", 15 & 9);

	ft_printf("%d, %d\n", 5, 10);
	ft_putnbr_base(5, "01");
	ft_putchar('\n');
	ft_putnbr_base(10, "01");
	ft_putchar('\n');
	ft_putnbr_base(5 & 10, "01");
	ft_printf("\n%d\n", 5 & 10);

	ft_printf("%d, %d\n", 12, 23);
	ft_putnbr_base(12, "01");
	ft_putchar('\n');
	ft_putnbr_base(23, "01");
	ft_putchar('\n');
	ft_putnbr_base(12 & 23, "01");
	ft_printf("\n%d\n", 12 & 23);
	*/
	char	x = 127;
	x += 1;
	ft_printf("%d\n", x);
	int	y = 15;
	ft_printf("%d\n", ~(y & 80000000) | (x & 0x7FFFFFFF));
}

/**
 * if the rightmost bit is 0, we pb
 * else we ra and pass to the following
 * and so on
 * after that pa for every num in stack b
 * we do then the same for the bit on the right.
 * and then for the the bit on the right of it
 * until there are no bits left
 * 
 * 
 * 
*/
