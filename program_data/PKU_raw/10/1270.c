main()
{
      int n,a[25],b[25],i,j,max,s;
      scanf("%d",&n); 
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a[i]);
                      b[i]=0;
      }
      

      for(i=n-1;i>=0;i--)
      {
                         max=0;
                         for(j=i;j<n;j++)
                         {
                                         if(a[j]<=a[i])
                                         {
                                                       s=b[j]+1;
                                                       if(s>=max)max=s; 
                                         }
                         }
                         b[i]=max;
      }
      max=0;
      for(i=0;i<n;i++)
      {
                      if(b[i]>=max)max=b[i];
      }
      printf("%d",max);
}