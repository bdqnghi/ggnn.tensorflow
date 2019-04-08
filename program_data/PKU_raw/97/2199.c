
int main()
{
  int a=0;
  int b=0;
  int i=0;
  int t=0,z=0,number=0;
  int money[6] = {100,50,20,10,5,1};

  scanf("%d",&a);
  b=a;

  while(i<=4)
  {
	t=b%money[i];
    number=(b-t)/money[i];
	b=t-z*money[i];
	printf("%d\n",number);
	i++;
  }
  printf("%d",b);
  return 0;
}