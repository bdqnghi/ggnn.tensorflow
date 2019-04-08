int fang(int a,int b)
{
    int m; 
    if(b==1||a==0) m=1;
    else
    {
        if(a>=b) m=fang(a-b,b)+fang(a,b-1);
        if(a<b)  m=fang(a,b-1);
    }
    return m;
}
main()
{
      int i,p,q,a,n;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          scanf("%d %d",&p,&q);
          a=fang(p,q);
          printf("%d\n",a);
      }
}