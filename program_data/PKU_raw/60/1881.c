main()
{
      int n,i,j,t,m,p;
      t=1; 
      int a[10000];
      scanf("%d",&n);
      if(n<5)
      printf("empty");
      else
      {printf("3 5");
          for(i=2;i<=n;i++)
      {a[t]=i;
                       for(j=i;j>1;j--)
      {if(i%j==0)
      m=j;}
      if(m==i)
      {a[t]=i;
      t=t+1;}
      }
      for(p=3;p<t;p++)
      {if(a[p+1]-a[p]==2)
      printf("\n%d %d",a[p],a[p+1]);}
}
      }