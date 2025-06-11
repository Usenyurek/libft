void *ft_bzero(void *arr, unsigned int size)
{
    unsigned char *p = (unsigned char *)arr;
    unsigned int i;

    i = 0;
    while(i != size)
    {
        p[i] = 0;
        i++;
    }
}
