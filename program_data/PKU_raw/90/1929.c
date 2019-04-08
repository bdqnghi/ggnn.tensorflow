int fang(int m,int n,int j)
{
    int a=0,k,i;
    if(n==1)
    return m>=j;
    else if(n<=m)
    {
    for(k=j;k<m;k++)     
    {
         a+=fang(m-k,n-1,k);           
    }
    }
    else if(n>m)
    {
         n=m;
         for(k=j;k<m;k++)
         {
                         a+=fang(m-k,n-1,k);
         }
    }
    return a;
}

int main()
{
    int t,M[20],N[20],k[20],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                    scanf("%d %d",&M[i],&N[i]);
                    k[i]=fang(M[i],N[i],0);
    }
    for(i=0;i<t;i++)
    {
                    printf("%d\n",k[i]);
    }
    return 0;
} 