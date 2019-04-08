int MI(int x)
{
    int a,mul=1;
    for(a=0;a<x;a++)
    {
                 mul=mul*10;   
    }
    return mul;
}
int reverse(int num)
{
    int a=1,count,i,n,plus=0,c=2,remove;
    for(count=0;a!=0;count++)
    {
                 a=num/MI(count);            
    }
    for(i=1;i<=count-1;i++)
    {
                a=num/MI(count-c);
                plus=plus+a*MI(i-1);
                num=num-a*MI(count-c);
                c++;
    }
    return plus;
}
main()
{
      int n[10001],answer[7],i;
      for(i=1;i<=6;i++)
      {
      scanf("%ld",&n[i-1]);
      answer[i-1]=reverse(n[i-1]);
      }
      for(i=1;i<=6;i++) 
      printf("%ld\n",answer[i-1]);
      getchar();
      getchar();
}
