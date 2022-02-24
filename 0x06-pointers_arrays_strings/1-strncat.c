#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 * @n: the maximum number of bytes to append from src
 *
 * This function it will use at most n bytes from src; and src does not need to be null-terminated 
 * if it contains n or more bytes.
 * Return a pointer to the resulting string dest. 
 * */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;

	while (src_len < n && src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + src_len < src)
	{
		while (src_len--)
			*dest_end++ = *src++;
		*dest_end = '\0';
	}

	return (dest);
}
