main()
{
      int n;
      scanf("%d",&n);
      int a[n];
      int i;
      for (i=0;i<n;i++)
       scanf("%d",&a[i]);
      int k,j,t;
      int f=0;
      scanf("%d",&k);
      j=n;
      i=0;
      while (i<n)
      {
          i++;
          if (a[f]==k)
          {
              j--;
              for (t=f;t<=j;t++)
                a[t]=a[t+1];
          }
          else f++;
      }
      printf("%d",a[0]);
      for (i=1;i<j;i++)
       printf(" %d",a[i]);
      getchar();
      getchar();
      getchar();
}
