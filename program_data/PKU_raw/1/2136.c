int f(int a,int b)
{
    int c,s=0,i;
    c=(int)sqrt(a);
    for(i=b;i<=c;i++)
    {
     if(a%i==0)
     s=s+f(a/i,i);
    }
    return s+1;
}
main()
{
      int n,i;
      scanf("%d",&n);
      int num[1000];
      for(i=0;i<n;i++)
      {
        scanf("%d",&num[i]);
        printf("%d\n",f(num[i],2));
      }
      }