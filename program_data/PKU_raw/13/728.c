main()
{
      int n,a[20000],b[20000],i,j;
      scanf("%d",&n);
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(i=0;i<n;i++)
        b[i]=0;
      printf("%d",a[0]);
      for(i=1;i<n;i++)
        for(j=0;j<i;j++)
          if(a[i]==a[j])
          {
             b[i]++;
             break;
          }   
      for(i=1;i<n;i++)
        if(b[i]==0)
          printf(" %d",a[i]);
      getchar();
      getchar();
      getchar();
      getchar();
}
