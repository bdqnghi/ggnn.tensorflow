main()
{
      int a[100000],b[100000],n,i,l,rs=1,br=0,shml;
      scanf("%d",&n);
      shml=n-1;
      for(i=0;;i++)
      {
              scanf("%d %d",&a[i],&b[i]);
              if(a[i]==b[i])
              break;
      }
      l=i+1;
      if(a[0]!=0)
      shml=0;
      for(i=1;i<l;i++)
      {
                      if(a[i]!=a[i-1])
                      {
                                      rs++;
                                      if(a[i]==a[i-1]+2)
                                      shml=a[i-1]+1;
                      }
      }
      printf("%d",shml);
}