
int max(int x,int y)
{
    if(x>=y)
    return x;
    else
    return y;
}
main()
{
      int i,j,k,m,n,res=0;
      scanf("%d",&n);
      int a[n];
      for(i=0;i<n;i++) 
      scanf("%d",&a[i]);
      int b[n],tem=0;
      for(i=0;i<n;i++) b[i]=0;
      b[n-1]=1;
      for(i=n-2;i>=0;i--)
      {
                         tem=0;
                         for(j=n-1;j>i;j--)
                         {
                                           if(a[i]>=a[j]) 
                                           tem=max(tem,b[j]);
                                           else
                                           continue;
                         }
                         b[i]=tem+1;
      }
      for(i=0;i<n;i++) res=max(res,b[i]);
      printf("%d",res);
      
} 
