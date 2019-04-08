int f(int n)
{
    int c;
    if(n==1||n==2)
    c=1;
    else
    c=f(n-1)+f(n-2);
    return(c);
}
main()
{
      int n,i,m;
      int f(int n);
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
             scanf("%d",&m);
             printf("%d\n",f(m));
      }
      getchar();
      getchar();
}