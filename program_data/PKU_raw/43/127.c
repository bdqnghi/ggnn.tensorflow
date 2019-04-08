      int i,n,s=0;
int zhishu(int a)
{
    s=0;
    if(a==1)
    return 0;
    else 
    {
    for(i=2;i<=a/2;i++)
    {if(a%i==0)
    s++;}
    if(s==0)
    return 1;
    else 
    return 0;
    }
}
main()
{
      int i,n;
      scanf("%d",&n);
      for(i=1;i<=n/2;i++)
      {
                         if(zhishu(i)==1 && zhishu(n-i)==1)
                         printf("%d %d\n",i,n-i);
                         }
      getchar();
      getchar();
      }