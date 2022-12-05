#include	"ft_printf.h"

int	ft_putstr_print(char *s)
{
	int	count;

	count = ft_strlen(s);
	write(1, s, count);
	return (count);
}
