int main()
{
    int i,j,m,n,p;
    char str[10001],a[2000],b[2000],c[2000];
    while (gets(str))
    {
        n=strlen(str);
        strcpy(a,str);
        for (i=0;i<n;i++) c[i]=' ';
        for (i=0;i<n;i++)
            if (a[i]==')')
            {
                p=0;
                for (j=i-1;j>=0;j--)
                {
                    if (a[j]=='(')
                    {
                        a[i]='a';
                        a[j]='a';
                        p=1;
                        break;
                    }
                }
                if (p!=1) c[i]='?';
            }
        for (i=n-1;i>=0;i--)
            if (a[i]=='(')
            {
                p=0;
                for (j=i;j<n;j++)
                {
                    if (a[j]==')')
                    {
                        a[i]='a';
                        a[j]='a';
                        p=1;
                        break;
                    }
                }
                if (p!=1) c[i]='$';
            }
        puts(str);
        for (i=0;i<n;i++) printf("%c",c[i]);
        printf("\n");
    }
}
