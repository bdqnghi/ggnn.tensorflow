main()
{
    char a[100][101],b[101],c[101];
    int n,m;
    scanf("%d",&n);
    for(m=0;m<n;m++)
    {
    scanf("%s",a[m]);
    }
    for(m=0;m<n;m++)
    {int i=0,j=0,k=0;int n;
        n=strlen(a[m]);
        for(i=0;i<n;i++)
        {b[i]=' ';
            c[i]=' ';}


        for(i=n-1;i>=0;i--)
            if(a[m][i]=='(')
                b[i]=a[m][i];
        for(i=0;i<n;i++)
            if(a[m][i]==')')
                c[i]=a[m][i];
        for(i=n-1;i>=0;i--)
            if(b[i]=='(')
            {for(j=i+1;j<n;j++)
                if(c[j]==')')
                {c[j]=' ';
                 b[i]=' ';
                    break;}}
        printf("%s\n",a[m]);
        for(i=0;i<n;i++)
        {if(b[i]!=' ')
               a[m][i]='$';
             if(c[i]!=' ')
                 a[m][i]='?';
            if(b[i]==' '&&c[i]==' ')
                a[m][i]=' ';
        }
        printf("%s\n",a[m]);
    }
}
