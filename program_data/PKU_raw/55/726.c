main()
{
    int f,t,n[10000],m[10000],l,i,s=0,k,g,h;
    char c[10000],d[10000];
    scanf("%d %s %d",&f,&c,&t);
    l=strlen(c);
    for (i=l-1;i>=0;i--)
    {
        if (c[i]>='0' && c[i]<='9')
            n[l-1-i]=c[i]-'0'; 
        else
        {
            if (c[i]>='a' && c[i]<='z')
                n[l-1-i]=c[i]-'a'+10;
            else
            {
                if (c[i]>='A' && c[i]<='Z')
                    n[l-1-i]=c[i]-'A'+10;
            }
        }
    }
    for (i=0;i<l;i++)
    {   
        g=1;
        for (k=0;k<i;k++)
            g*=f;
        s+=n[i]*g;
    }
    if (s==0)
        h=1;
    else
        h=0;
    for (k=0;s!=0;k++)
    {
        m[k]=s%t;
        s=s/t;
    }
    for (i=k-1;i>=0;i--)
    {
        if (m[i]<=9)
            d[k-1-i]=m[i]+'0';
        else
            d[k-1-i]=m[i]-10+'A';
    }
    for (i=0;i<k;i++)
    {
        printf("%c",d[i]);
    }
    if (h==1)
        printf("0");
    printf("\n");
}
