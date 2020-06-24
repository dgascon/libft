#include "libft_string.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t size_src;

	i = 0;
	if (src == 0)
		return (0);
	size_src = ft_strlen(src);
	if (size <= 0)
		return (size_src);
	while (i < size - 1 && *(src + i))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (size_src);
}