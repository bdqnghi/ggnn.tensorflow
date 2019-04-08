int digit(int n)
{
    int q=1,i;
    for(i=0;q>0;i++)
    {
                    q=n/10;
                    n=n/10;
    }
    return i;
}
int digz(int n)
{
    int i,q=0,r=10;
    for(i=0;q==0;i++)
    {
                    q=n%10;
                    n=n/10;
    }
    return i-1;
}
int fx(int a)
{
      int b=0,m,n=1,l,p=1,i,j,k;
      if(a>0)
      {
             l=digit(a)-digz(a);
             for(i=0;i<digit(a)-1;i++)
             {
                                      p=p*10;
             }
             for(i=0;i<l-1;i++)
             {
                               n=n*10;
             }
             for(i=0;i<l;i++)
             {
                             m=1;
                             for(j=0;j<i;j++)
                             {
                                             m=m*10;
                             }
             b=(a/(p/m))*m+b;
             a=a%(p/m);
             }
      }
      else if(a<0)
      {
             a=-a;
             l=digit(a)-digz(a);
             for(i=0;i<digit(a)-1;i++)
             {
                                      p=p*10;
             }
             for(i=0;i<l-1;i++)
             {
                               n=n*10;
             }
             for(i=0;i<l;i++)
             {
                             m=1;
                             for(j=0;j<i;j++)
                             {
                                             m=m*10;
                             }
             b=(a/(p/m))*m+b;
             a=a%(p/m);
             }
             b=-b;
      }
      else
      b=0;
      return b;
}
main()
{
      int a,b,i;
      for(i=0;i<6;i++)
      {
                      scanf("%d",&a);
                      b=fx(a);
                      printf("%d\n",b);
      }
      getchar();
      getchar();
}