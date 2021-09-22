#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*src_new;
	char		*dst_new;
	size_t		i;

	src_new = src;
	dst_new = dst;
	i = 0;
	while (i < n)
	{
		dst_new[i] = src_new[i];
		if (src_new[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
