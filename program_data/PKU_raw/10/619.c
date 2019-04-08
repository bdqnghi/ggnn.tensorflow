main()
{
      int n;
      scanf("%d",&n);
      int a[n];
      int i,j,max=0;
      for(i=0;i<n;i++)
         scanf("%d",&a[i]);
      int b[n];
      for(i=0;i<n;i++)
        b[i]=1;
      b[n-1]=1;
      for(i=n-2;i>=0;i--)
      {
            for(j=i+1;j<n;j++)
            {
               if(a[j]<=a[i]&&b[j]+1>=b[i])
               b[i]=b[j]+1;                  
            }                   
      }
      for(i=0;i<n;i++)
      {
          if(b[i]>max)
          max=b[i];                
      }
      printf("%d",max);  
}