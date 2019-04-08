int f(int n)
{
    int k;
    if(n==1||n==2)
    k=1;
    else
    k=f(n-1)+f(n-2);
    return k;
}
main()
{
      int n,i,k;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
           scanf("%d",&k);
           printf("%d\n",f(k));
      }
      getchar();
      getchar();
      return 0;
}
