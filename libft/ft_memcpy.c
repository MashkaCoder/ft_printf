#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ori;

	dst_ori = dst;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		src++;
		dst++;
		n--;
	}
	return (dst_ori);
}
