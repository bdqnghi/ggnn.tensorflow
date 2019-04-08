main()
{
    char a[1000];
    char b[1000];
    scanf("%s",a);
    int i,m,k,p;
    m='A'-'a';
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&& a[i]<='z')
        b[i]=a[i]+m;
        else
        b[i]=a[i];
    }
    b[i]='\0';
    p=1;
    for(k=0;b[k+1]!='\0';k++)
    {
        if(b[k]==b[k+1])
        {
            p=p+1;
        }
        else
        {
            printf("(%c,%d)",b[k],p);
            p=1;
        }
    }
    printf("(%c,%d)",b[k],p);
}