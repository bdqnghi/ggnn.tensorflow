int reverse(int num)
{
    int a,b=0,i;
    if(num==0)
    b=0;
    for(i=0;num!=0;i++)
    {
               a=num%10;
               num=num/10;
               b=a+b*10;
    }
    return b;
}
main()
{
                   int n,i,j,k;
                   for(k=0;k<6;k++)
                   {
                                   scanf("%d",&n);
                                   printf("%d\n",reverse(n));
                   }
      getchar();
      getchar();
      getchar();
}
