main()
{
      int n,i,j;
      scanf("%d",&n);
      int a[25],len[25];
      for(i=0;i<n;i++)
          scanf("%d",&a[i]);
      for(i=0;i<n;i++)
          len[i]=1;
      int lenmax=1;
      for(i=n-2;i>=0;i--)
      {
          int max=0;
          for(j=n-1;j>i;j--)
          {
              if((a[j]<=a[i])&&(len[j]>max))
                 max=len[j];
          }
          len[i]=max+1;
          lenmax=lenmax>len[i]?lenmax:len[i];
      }
      printf("%d\n",lenmax);
      return 0;
}   