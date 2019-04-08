int bf(int n,int m)
{
    int s;
    if(n==1)
    {
        s=1;
    }
    else if(n==2)
    {
        if(m==1)
            s=1;
        if(m==2)
            s=2;
        if(m>n)
        {
            s=bf(n-1,m)+bf(n,m-n);
        }            
    }
    else if(m<n)
    {
        s=bf(n-1,m);
    }
    else if(n==m)
    {
         s=1+bf(n-1,m);
    }
    else if(m>n)
    {
         s=bf(n-1,m)+bf(n,m-n);
    }
    return s;
}
int main()
{
    int t,i,n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",bf(n,m));
    }
  
    return 0;
}
