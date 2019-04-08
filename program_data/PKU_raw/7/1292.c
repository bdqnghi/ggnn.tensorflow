int cmp(int i,char a[],char b[])
{
    int k;
    for(k=0;b[k]!='\0';i++,k++)
    {
        if(a[i]!=b[k])
        break;
    }
    if(b[k]=='\0')
    return 1;
    else
    return 0;
}
main()
{
    int i,n,k;
    char s[256],subs[256],re[256];
    gets(s);
    gets(subs);
    gets(re);
    for(i=0,n=0;n==0&&s[i]!='\0';i++)
    {
        if(s[i]==subs[0])
        n=cmp(i,s,subs);
    }
    if(n==1)
    {
        for(i=i-1,k=0;re[k]!='\0';i++,k++)
        {
            s[i]=re[k];
        }
    }
    printf("%s\n",s);
}





