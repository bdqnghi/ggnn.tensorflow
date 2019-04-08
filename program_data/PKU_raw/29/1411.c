double f(int n)
{ 
    if(n==0)
       return 1.000;
    else if(n==1)
       return 2.000;
    else
       return f(n-1)+f(n-2);
}
double g(int n)
{
        double z=0.000;
    for (int i=0;i<n;i++)
    {
        z=z+f(i+1)/f(i);
    }
    return z;
}
main()
{
    int m,n;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
            scanf("%d",&n);
            printf("%.3f\n",g(n));
    }
    getchar();
    getchar();
}
