char *ft_strrchr(const char *s, int c)
{
    unsigned char n;
    char *last;

    n = (unsigned char)c;
    last = NULL;
    while(*s)
    {
        if((unsigned char)*s == n)
            last = (char *)s;
        s++;
    }
    if(n == '\0')
        last = ((char *)s);
    return(last);
}