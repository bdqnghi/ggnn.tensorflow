int main()
{
    char a[250],b[250],c[250],d[250],e[250];
    gets(a);
    gets(b);
    int i;
    for(i=strlen(a)-1;i>=0;i--)
    c[strlen(a)-1-i]=a[i]-'0';
    for(i=strlen(b)-1;i>=0;i--)
    d[strlen(b)-1-i]=b[i]-'0';
    int big,sma;
    big=strlen(a)>=strlen(b)?strlen(a):strlen(b);
    sma=strlen(a)<=strlen(b)?strlen(a):strlen(b);
    e[0]=(c[0]+d[0]);
    for(i=1;i<=big-1;i++)
    if(i<=sma-1)
    e[i]=(c[i]+d[i]+e[i-1]/10);
    else
    {
        if(strlen(a)>=strlen(b))
        e[i]=(c[i]+e[i-1]/10);
        else
        e[i]=(d[i]+e[i-1]/10);
    }
    if(e[big-1]!=0||big==1)
    printf("%d",e[big-1]);
    for(i=big-2;i>=0;i--)
    printf("%d",e[i]%10);
}
