
int max(int x,int y)
{
      if(x>=y)
      return x;
      else
      return y;
}

main()
{
      int i,j,k,p[25],result,a[25],b[25],sum;
      for(i=0;i<25;i++) a[i]=b[i]=p[i]=0;
      scanf("%d",&k);
      for(i=0;i<k;i++) scanf("%d",&p[i]);
      b[k-1]=1;
      for(i=k-2;i>=0;i--)
      {
                         sum=0;
                         for(int m=0;m<25;m++) a[m]=0;
                         for(j=k-1;j>i;j--) 
                         {
                                            if(p[j]<=p[i]) a[j]=b[j];
                                            sum=max(sum,a[j]);
                         }
                         b[i]=sum+1;
      }
      result=0;                   
      for(i=0;i<k;i++) result=max(result,b[i]);
      printf("%d",result);
      
}
