int tp(int x)
{
 int i,k;
 k=sqrt(x);
 for(i=2;i<=k;i++)
 {
                 if(x%i==0) break;
                 }   
 if(i==k+1)
 return 1;
 else return 0;
}

int th(int x)
{
  int a,b,c;
  b=0;
  c=x;
  while(x!=0)
  {
             a=x%10;
             b=b*10+a;
             x=x/10;
             }
  if(c==b) return 1;
  else return 0;
}

main()
{
      int m,n;
      scanf("%d %d",&m,&n);
      int i,t=0;
      for(i=m;i<=n;i++)
      {
                          if(tp(i)==1 && th(i)==1)
                          {
                                      if(t==0)
                                      {
                                              printf("%d",i);
                                              t++;
                                              }
                                      else
                                      printf(",%d",i);
                                      }
                          }
      if(t==0)
      printf("no");
      getchar();
      getchar();
      }