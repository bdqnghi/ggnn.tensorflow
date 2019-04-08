int main()
{
    char *p;
    int i,l;
    p=(char *)malloc(30*sizeof(char));
    gets(p);
    l=strlen(p);
    for (i=0;i<l-1;i++)
    {
        
        if (isdigit(*(p+i)))
        printf("%c",*(p+i));
        if (isdigit(*(p+i))&&isdigit(*(p+i+1))==0)
        printf("\n"); 
    }
    if (isdigit(*(p+l-1)))
    printf("%c",*(p+l-1));
    return 0;
}
