main()
{
      int i,n,a,b,c,s[10000],d[10000];
      scanf("%d",&n);
      for(i=0;i<n;i++)
        {
          s[i]=0;
          d[i]=0;
        }
        a=1;
        b=1;
      while((a+b)!=0)
      {
        scanf("%d %d",&a,&b);
        s[b]=s[b]+a;
        if(a==0)
        d[b]=1;
      }
      
      c=0;
      if(s[0]==n*(n-1)/2)
        {
          printf("0\n");
          c=1;
        }
      for(i=1;i<n;i++)
      {
        if(((s[i]+i)==n*(n-1)/2)&&d[i]==1)
        {
          printf("%d\n",i);
          c=1;
        }
      }
      if(c==0)
        printf("NOT FOUND");
} 