int fib(int n)
{
    if (n<=1) 
    return n;
    else
    return fib(n-2)+fib(n-1);
}
main()
{
      int n;
      scanf ("%d",&n);
      int a;
      for (int i=0;i<n;i++)
      {
          scanf ("%d",&a);
          printf ("%d\n",fib(a));
      }
}