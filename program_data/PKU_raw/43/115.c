main()
{
      int n,a,b,c,d,x,y;
      int f(int a);
      scanf("%d",&n);
      c=n/2;
      for(b=3;b<=c;b++)
      {
            d=n-b;
            x=f(b);
            y=f(d);
            if(x==2&&y==2)
            printf("%d %d\n",b,d);
      }
}
int f(int a)
{
    int i,e=0;
    for(i=1;i<=a;i++)
    {
          if(a%i==0)
          e=e+1;
    }
    return(e);
}
