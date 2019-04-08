main()
{
      int n,x,y,i;
      int a[100000];
      int b[100000];
      scanf("%d",&n);
     while(1)
       {
              scanf("%d %d",&x,&y);
              if(x==0&&y==0)
              break;
              else
              {a[x]=1;b[y]++;}
      }
      for(i=0,x=0;i<=n-1;i++)
      {
                       if(a[i]==0)
                       {x++;y=i;}
      }
      if(x==1&&b[y]==n-1)
      printf("%d",y);
      else
      printf("NOT FOUND");
}