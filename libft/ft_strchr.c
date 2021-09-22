#include "libft.h"

char	*ft_strchr(char const *string, int symbol)
{
	int	i;

	i = 0;
	while (string[i] != '\0' && string[i] != (unsigned char)symbol)
		i++;
	if (string[i] != (unsigned char)symbol)
		return (NULL);
	return (&((char *)string)[i]);
}
