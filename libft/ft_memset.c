#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*a;

	a = b;
	while (len > 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
		len--;
	}
	return (a);
}
