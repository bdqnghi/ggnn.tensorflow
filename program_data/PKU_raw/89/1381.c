
int main()
{
    int a[100000],b[100000],k[100000];
    long N,i,j=0,n,x;
    scanf("%d",&N);
    for(i=0;i<=100000;i++)
    {
                         scanf("%d%d",&a[i],&b[i]);
                         if(a[i]==0&&b[i]==0)
                         {
                              x=i-1;               
                              break;
                         }
                         else
                         ;
    }
    for (i=0;i<=x;i++)
    {
        for(n=0;n<N;n++)
        {
                         if(b[i]==n)
                            k[n]++;
                         
                           
        }
    }
    for (n=0;n<N;n++)
    {
        if(k[n]==N-1)
        printf("%d",n);
        else
        ;
    }
    
    

  return 0;
}
