main()
{
      int i,n;
      scanf("%d",&n);
      int a[n];
      int b[20];
      b[0]=1;
      b[1]=1;
      for (i=2;i<20;i++)
      b[i]=b[i-1]+b[i-2];
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a[i]);
                      printf("%d\n",b[a[i]-1]);
      }

}
