#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_res;

	i = 0;
	if (!s)
		return (NULL);
	s_res = (char *)malloc(ft_strlen((const char *)s) + 1);
	if (!s_res)
		return (NULL);
	while (s[i] != '\0')
	{
		s_res[i] = f(i, s[i]);
		i++;
	}
	s_res[i] = '\0';
	return (s_res);
}
