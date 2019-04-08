int fun(int a)
{
    int sum,i;
    if(a==2||a==3)
    return 0;
  if(a>3)
  {
         for(sum=0,i=2;i<=sqrt(a);i++)
  {
      if(a%i==0)
      {
                sum++;
              break;
              }
              }
      return sum;
      }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<5)
    {
           printf("empty");
           }
           if(n>=5){
    for(i=2;i<=n-2;i++)
    {
                      if(fun(i)==0)
                      {
                                   if(fun(i+2)==0)
                                   {
                                                  printf("%d %d\n",i,i+2);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  return 0;
                                                  }
