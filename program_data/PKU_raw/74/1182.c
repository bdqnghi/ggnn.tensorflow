int main()
{
    int a,b,i,k,j,t,r,s,u,Num=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==1)i=a+1;
    else i=a;
    while(i<=b)
    {
               k=(int)sqrt(i);
               for(j=2;j<=k;j++)
               {
                               if(i%j==0)
                               break;
               }
               if(j>k)
               {
                      int c[10000]={0};
                      t=i;
                      r=0;
                      while(t!=0)
                      {
                                 c[r]=t%10;
                                 t=t/10;
                                 r++;                 
                      }
                      s=0;
                      for(u=0;u<r;u++)
                      s=s*10+c[u];
                      if(s==i&&Num!=0)
                      {
                              printf(",%d",i);
                              Num++;
                      }
                      if(s==i&&Num==0)
                      {
                              printf("%d",i);
                              Num++;
                      }
               }
               i++;
    }
    if(Num==0)
    printf("no\n");
}