int main()
{
    int len;
    char str[200],*p;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    gets(str);
    len = strlen(str);
    for (p = str; *(p+1); p++)
        printf("%c", *p + *(p+1));
    printf("%c\n", *p + *str);
    return 0;
}
