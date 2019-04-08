main()
{
    int f(int n);
    int a,b;
    for(int i=1;i<=6;i++)
    {
        scanf("%d",&b);
        a=f(b);
        printf("%d\n",a);
    }
}
int f(int n)
{
    int i=0,m,b;
    double a=0;
    m=fabs(n);
    if(m==0)
    {
        return(0);
    }
    else
    {
        while(pow(10,i)<=m)
        {
            i++;
        }
        int k=0;
        while(k<i)
        {
            b=m/pow(10,i-k-1);
            a=a+b*pow(10,k);
            m=m-b*pow(10,i-k-1);
            k++;
        }
        if(n<0)
        return(-a);
        else
        return(a);
    }
}
