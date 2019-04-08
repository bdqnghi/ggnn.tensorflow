// ??10.3.cpp : ??????????????
//


int reverse(int num)
{
  int x=num/10,i=0,total=0;
  while(x!=0)
  {
	i++;
    x=x/10;
  }
  total=i;
  for(i=total;i>=0;i--)
  {
    x=x+(num%10);
	num=num/10;
	if(num==0)
	{
	  break;
	}
	x=x*10;
  }
  return x;
}
int main()
{
	int j=0,a=0,z=0;
	for(j=0;j<6;j++)
	{
	  scanf("%d",&a);
	  z=reverse(a);
	  printf("%d\n",z);
	}
	return 0;
}

