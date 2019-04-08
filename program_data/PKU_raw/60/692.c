int sushu(int n)
{
    int i,k;
    k=sqrt(n);
    if(!(n%2)) return 0;
    for(i=3;i<=k;i+=2)
    {
     if(!(n%i)) return 0;
    }
    return 1;
}
int main()
{
  int n,i,flag=0;
  scanf("%d",&n);
  for(i=3;i<=n-2;i+=2)
  {
      if(sushu(i)&&sushu(i+2))
      printf("%d %d\n",i,i+2),flag=1;
  }
  if(flag==0) printf("empty");
}