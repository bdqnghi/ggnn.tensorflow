int number(int m,int x)
{
    int a,b,c,n,l,k,r;
    k=(int)sqrt(m);
    if(x>m)
    {
        return 0;
    }
    else if(x>k)
    {
        return 1;
    }
    else
    {
        l=1;
        for(a=x;a<=k;a++)
        if(m%a==0)
        l=l+number(m/a,a);
        else;
        return l;
    }
}

main()
{
     int n,a;
     scanf("%d",&n);
     for(a=1;a<=n;a++)
     {
            int m,b;
            scanf("%d",&m);
            b=number(m,2);
            printf("%d\n",b);
     }
}