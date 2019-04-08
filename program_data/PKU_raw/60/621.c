main()
{
      int m,n,i,j,k;
      int a[100000];
      scanf("%d",&n);
      if (n<=4)
      {printf("empty");}
      else
      {k=0;
      for(j=3;j<=n;j++)
      {m=(int)sqrt(j);
      for(i=2;i<=m;i++)
      {
         if(j%i==0)
         break;
                }
      if (i==m+1)
      {a[k]=j;
      k++;}
      }
      for(k=0;k<10000;k++)
      {
      if(a[k]+2==a[k+1])
      printf("%d %d\n",a[k],a[k+1]);
      }}
      getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();

}
    