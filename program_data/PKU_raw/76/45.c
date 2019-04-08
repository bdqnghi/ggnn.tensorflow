int main()
{
      struct{
             int a;
             int b;
             }st[5001];
      int i,j,n,k;
      int l=0;
      int swap1,swap2;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d%d",&st[i].a,&st[i].b);
      }
      for(i=0;i<n-1;i++)
      {
          for(j=n-1;j>0;j--)
          {
              if(st[j].a<st[j-1].a)
              {
                  swap1 = st[j].a;
                  st[j].a = st[j-1].a;
                  st[j-1].a = swap1;
                  swap2 = st[j].b;
                  st[j].b = st[j-1].b;
                  st[j-1].b = swap2;
              }
          }                
      }
      int t;
      t = st[0].b;
      for(i=1;i<n;i++)
      {
                      if(st[i].a > t)
                      {
                                 break;
                                 }
                                 else
                                 {
                                     if(t < st[i].b)
                                     t=st[i].b;
                                 }
                      }
                      if(i != n)
                      {
                                 printf("no");
                       }
else
{
    printf("%d %d",st[0].a,t);
}

      return 0;
}
