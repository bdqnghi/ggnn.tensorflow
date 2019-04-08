main()
{
    int a,b,c,n,m;
    char x[510];
    gets(x);
    n=strlen(x);
    for(a=1;a<=n-1;a++)
    {
        for(b=0;b<=n-1-a;b++)
        {
            m=0;
            for(c=0;c<=a/2;c++)
            {
                if(x[b+c]!=x[b+a-c])
                m=1;
                else;
            }
            if(m==0)
            {
                for(c=b;c<=b+a;c++)
                printf("%c",x[c]);
                printf("\n");
            }
            else;
        }
    }
}
