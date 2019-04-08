int max(int sum[25],int x[25],int i,int j,int k)
{  
   int t,l=1;
   static int y[25];
   t=i+1;
   for(;t<=k-1;t++)
      if(t!=j&&x[i]>=x[t])
        {y[l]=sum[t];
         l++;
         }   
   for(i=1;i<l;i++)
      if(sum[j]<y[i])
        break;
   if(i==l)
     return(1);
   else
     return(0); 
}
main()
{
      int k,i,j;
      static int x[25],sum[25];
      scanf("%d",&k);
      for(i=0;i<k;i++)
         scanf("%d",&x[i]);
       sum[k-1]=1;
      for(i=k-2;i>=0;i--)
      { for(j=i+1;j<=k-1;j++)
            if(x[i]>=x[j]&&max(sum,x,i,j,k))
              sum[i]=sum[j];
         sum[i]++;
      }
      int m=sum[0];
      for(i=1;i<k;i++)
         if(sum[i]>m)
           m=sum[i];
      printf("%d",m);
} 
