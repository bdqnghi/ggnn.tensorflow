main()
{
      int i,j,n,m;
      int k=0;
      int a=0;
      int b=0;
      int c=0;
      scanf("%d",&n);
      for (i=3;i<=n;i++)
      {
        for(j=2;j<=(sqrt(i));j++)
        {
        if(i%j==0)
        k=k+1;
        }
        if(k==0)
        {
        m=a;
        a=i;
        b=m;
        if (a-b==2)
        {
        printf("%d %d\n",b,a);
        c=c+1;
        }
        }
        k=0;
      }
      if(c==0)
      printf("empty\n");
}