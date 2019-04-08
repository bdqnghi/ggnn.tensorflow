main()
{
    int i;
    char str[100];
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '&&str[i+1]!=' ')
    printf(" ");
    if(str[i]!=' ')
    printf("%c",str[i]);
    i++;
    }
}