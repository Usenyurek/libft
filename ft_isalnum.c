int ft_isalnum(int arg)
{
    return((arg <= 'z' && arg >= 'a') || (arg <= 'Z' && arg >= 'A') || (arg <= '9' && arg >= '0'));
}
