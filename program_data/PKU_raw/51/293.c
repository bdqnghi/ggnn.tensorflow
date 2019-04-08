int main()
{
    char s[1000],s1[10];
    int i,j,k,l,m=0,n,x;
    scanf("%d",&n); gets(s); gets(s);
    for (i=0;i<strlen(s);i++)
    {
        for (j=0;j<n;j++)
            s1[j]=s[j+i];
        x=0;
        for (j=i;j<strlen(s);j++)
        {
            l=0;
            for (k=0;k<n;k++)
                if (s[j+k]!=s1[k]) l=1;
            if (l==0) x++;
        }
        if (x>m) m=x;
    }
    if (m<=1) printf("NO");
    else
    {
    printf("%d\n",m);
    for (i=0;i<strlen(s);i++)
    {
        for (j=0;j<n;j++)
            s1[j]=s[j+i];
        s1[n]='\0';
        x=0;
        for (j=i;j<strlen(s);j++)
        {
            l=0;
            for (k=0;k<n;k++)
                if (s[j+k]!=s1[k]) l=1;
            if (l==0) x++;
        }
        if (x==m) puts(s1);
    }
    }
}
