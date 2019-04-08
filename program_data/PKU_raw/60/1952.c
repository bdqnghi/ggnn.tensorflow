int ispr(int a)
{
    int i,just=1;
    for(i=2;i*i<=a;i++)
    if(a%i==0)
    {
              just=0;
              break;
              }
    return just;
}
main()
{
      int n,a;
      scanf("%d",&n);
      if(n<5)
      printf("empty\n");
      else
      for(a=5;a<=n;a++)
      if(ispr(a)&&ispr(a-2))
      printf("%d %d\n",a-2,a);
      }