int main()
{
    char a[256],b[260],c[260],d[520];
    int i,m,a1,b1,c1;
    char *k;
    int j;

    gets(a);
    gets(b);
    gets(c);

    a1=strlen(a);
    b1=strlen(b);
    c1=strlen(c);
    k=strstr(a,b);

    if(k==NULL)
        printf("%s",a);
    else
    {
    m=k-&a[0];
    for(i=0;i<m;i++)
        d[i]=a[i];
    for(i=0;i<c1;i++)
        d[m+i]=c[i];
    j=m+c1;
    for(i=0;m+b1+i<=a1;i++)
        d[j+i]=a[m+b1+i];
    printf("%s",d);
    }
    return 0;
}
