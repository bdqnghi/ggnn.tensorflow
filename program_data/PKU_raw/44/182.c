int f(int m)
{
    int d=0;
    while(m!=0)
    {
    d=d*10+m%10;
    m=m/10;
    }
    return d;
}
main()
{
      int a[7],b[7],c[7],i=1,m;
      for (;i<=6;i++)
      {
      scanf("%d",&a[i]);
      if (a[i]>=0)
      {
      m=a[i];
      c[i]=f(m);
      
      }
      else
      {
      m=-a[i];
      b[i]=f(m);
      c[i]=-b[i];
      }
      }
      for(i=1;i<=6;i++)
      printf("%d\n",c[i]);
            return 0;
      }
      
