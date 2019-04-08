int main()
{
  int b,i=1,sum=0,n;
  double a;
  scanf("%d",&n);
    for(i=1;i<=n;i++)
  {
    a=(double)(i-7)/10;
    b=(i-7)/10;
    if(i%7==0||i<80&&i>69||a==b) continue;
    else sum+=i*i;
  }
  printf("%d\n",sum);
  return 0;
}
