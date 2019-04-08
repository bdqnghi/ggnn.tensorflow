main()
{
    int t[20],n,i,j,a,b,c;
    i=0;
    scanf("%d",&n);
    while (i<n)
    {
        scanf("%d",&t[i]);
        i=i+1;
    }
    i=0;
    while (i<n)
    {
        a=1;
        b=1;
        j=1;
        while (j<t[i])
        {
            c=b;
            b=a+b;
            a=c;
            j=j+1;
        }
        printf("%d\n",a);
        i=i+1;
    }
}