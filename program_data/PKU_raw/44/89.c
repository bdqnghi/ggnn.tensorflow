int reverse(int num)
{
	int fnum=0,k=0;
	if(num<0)
	{
		num=-num;
		k=1;
	}
	for(;num!=0;)
	{
		fnum=fnum*10+num%10;
		num=num/10;
	}
	if(k==0)
	return fnum;
	else
		return -fnum;
}
int main()
{
	int num[6];
	for(int i=0;i<6;i++)
	scanf("%d",&num[i]);
	for(int i=0;i<6;i++)
	printf("%d\n",reverse(num[i]));
}