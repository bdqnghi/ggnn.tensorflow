void main() 
    {
      int i,j,h,n;
      int a[100],b[100];
      scanf("%d\n",&n);
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);
      for(j=0;j<n;j++)
       b[j]=a[n-1-j];
      for(h=0;h<n-1;h++)
       printf("%d ",b[h]);
      printf("%d",b[n-1]);
     }
