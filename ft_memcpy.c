void *ft_memcpy(void *dest, const void *src, unsigned int size)
{
    unsigned int i;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    i = 0;
    while(i < size)
    {
        d[i] = s[i];
        i++;
    }

    return dest;
}
