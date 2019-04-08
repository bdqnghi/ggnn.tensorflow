main()
{
    char a[256],b[256],c[256];
    gets(a);
    gets(b);
    gets(c);
    int n=strlen(a);
    int m=strlen(b);
    int i,j;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[0])
        {
            for(j=1;j<m;j++)
            {
                if(a[i+j]!=b[j])
                break;
            }
            if(j==m)
            {
                for(j=0;j<m;j++)
                {
                    a[i+j]=c[j];
                }
                break;
            }
        }
    }
    puts(a);
}
