main()
{
      int n,i,k=0,sum=0;
      int c,b;
      int a[100]={0};
      scanf("%d",&n); 
      for(i=1;i<=n;i++)
      {
          b=i/10;
          c=i-10*b;
          if(i%7!=0&&c!=7&&b!=7)
          {
                a[k]=i;
                k++;
          }
      }
      for(k=0;a[k]!=0;k++)
      sum=sum+a[k]*a[k];
      printf("%d",sum);
} 
