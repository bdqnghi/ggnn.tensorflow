int main()
{
    int j,n,e,shuru[501],shuchu[501];
    j=0;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&shuru[i]);
        if(shuru[i]%2==1)
        {
             shuchu[j]=shuru[i];
             j=j+1;
        }
       
    }
    for(int k=1;k<j;k++)
    {
        for(int m=0;m<j-k;m++)
        {
            if(shuchu[m]<shuchu[m+1])
            {
               e=shuchu[m+1];
               shuchu[m+1]=shuchu[m];
               shuchu[m]=e;
            }
        }
        printf("%d,",shuchu[j-k]);
    }
    
    
     for(int m=0;m<j-j;m++)
        {
            if(shuchu[m]<shuchu[m+1])
            {
               e=shuchu[m+1];
               shuchu[m+1]=shuchu[m];
               shuchu[m]=e;
            }
        }
        printf("%d",shuchu[j-j]);
    return 0;
}
