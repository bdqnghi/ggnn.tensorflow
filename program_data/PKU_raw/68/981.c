  

int main( )
{
   int a[50000],i,j,n,k,t=2,m,c[50000]={0},p;
   scanf("%d",&n);
   a[0]=2;
   a[1]=3;
   c[2]=1;
   c[3]=1;
   for (i=5;i<n;i=i+2)
    {
      for (j=0;a[j]<=sqrt(i);j++)
       {
         if (i%a[j]==0)
           break;
       }
      if (a[j]>sqrt(i))
        {
          a[t]=i;
          c[a[t]]=1;
          t++;
        }
     }
   for (i=6;i<=n;i=i+2)
    {
      for (j=0;a[j]<=i/2;j++)
          {
            p=i-a[j];
            if (c[p]==1)
              {
                printf("%d=%d+%d\n",i,a[j],i-a[j]);
                break;
              }
          }
     }
   return 0;
}