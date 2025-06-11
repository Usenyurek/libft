void *ft_memset(void *arr, int vl, unsigned int size)
{
    unsigned char *p = (unsigned char *)arr;
    unsigned char vl0 = (unsigned char) vl;
    int i;

    i = 0;
    while(i != size)
    {
        p[i] = vl0;
        i++;
    }

    return arr;
}
