int f(int n)
{
    int c;
    if(n==1||n==2)
    {
    c=1;
    return c;
}
    else
    {
        c=f(n-1)+f(n-2);
    }
    return c;
}
main()
{
      int a[10000],n,i;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a[i]);
                      printf("%d\n",f(a[i]));
      }
      getchar();
      getchar();
}
