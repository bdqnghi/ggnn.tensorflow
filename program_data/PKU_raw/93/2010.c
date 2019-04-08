void main()
{
  int n,a,b,c;
  scanf("%d",&n);
  a=n%3;
  b=n%5;
  c=n%7;
  if (a==0&&b==0)
  {
    printf("3 5");
    if (c==0)
      printf(" 7");
  }
  if (a==0&&b!=0)
  {
    printf("3");
    if (c==0)
      printf(" 7");
  }
  if (a!=0&&b==0)
  {
    printf("5");
    if (c==0)
      printf(" 7");
  }
  if (a!=0&&b!=0)
  {
    if (c==0)
      printf("7");
    else
      printf("n");
  }
}
