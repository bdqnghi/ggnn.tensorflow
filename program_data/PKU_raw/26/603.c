void main()
{
    int i,n;
    char str[101];
    for(i=0;;i++)
    {
        str[i]=getchar();
        if(str[i]=='\n')break;
    }
    n=i;
    for(i=0;i<n;i++)
    {
        if(i==0)putchar(str[i]);
        else if(str[i]==' '&&str[i-1]!=' '||str[i]!=' ')putchar(str[i]);
    }
}
