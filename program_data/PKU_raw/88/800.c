int main()
{
    char s[1000];
    int i,l;
    gets(s);
    l=strlen(s);
    for (i=0;i<l-1;i++)
    {
        if (isdigit(s[i]))
        printf("%c",s[i]);
        if (isdigit(s[i])&&isdigit(s[i+1])==0)
        printf("\n");
    }
    if (isdigit(s[l-1]))
    printf("%c",s[l-1]);
    return 0;
}