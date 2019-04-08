main()
{
      int a[50]={0};
      int f[50],max,i,j,n;
      scanf ("%d",&n);
      scanf ("%d",&a[0]);
      f[0]=1;
      for (i=1;i<n;i++)
      {
          scanf (" %d",&a[i]);
          f[i]=1;
      }
      for (i=0;i<n;i++)
      {
          for (j=0;j<i;j++)
          {
              if (a[j]>=a[i])
              {
                             if (f[j]+1>f[i]) f[i]=f[j]+1;
                             else f[i]=f[i];
              }
          }
      }
      max=f[0];
      for (i=1;i<n;i++)
      {
          if (f[i]>max)
          max=f[i];
      }
      printf ("%d\n",max);
}