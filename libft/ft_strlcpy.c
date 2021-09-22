#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	src_size;
	unsigned int	i;

	i = 0;
	src_size = 0;
	if (!dst && !src)
		return (0);
	while (src[i] != '\0')
	{
		i++;
	}
	if (dstsize == 0)
		return (i);
	while (src[src_size] != '\0' && src_size < dstsize - 1)
	{
		dst[src_size] = src[src_size];
		src_size++;
	}
	dst[src_size] = '\0';
	return (i);
}
