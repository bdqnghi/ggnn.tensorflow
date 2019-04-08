int main ()
{
  int x;
  int i,j,k;
  int a,b;
  int sum=0;

  scanf("%d",&x);
  for (i=2;i<x-1;i++)
  {
      a=1;
      b=1;
      for(j=2;j<i;j++)
      {
          if (i%j==0)
          a=0;
      }
      for(j=2;j<i+2;j++)
      {
          if ((i+2)%j==0)
          b=0;
      }
      if ((a*b)!=0)
      {printf("%d %d\n",i,i+2);
      sum++;}
  }
  if (sum==0)
  printf("empty");
  return 0;


}
