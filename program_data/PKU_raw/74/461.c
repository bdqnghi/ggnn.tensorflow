/*??*/
short IsPremium(int n)
{
	int i;
	if(n==2)
	return 1;
	if(n%2==0)
	return 0;
	if(n<=1)
	return 0;
	for(i=3; i<=sqrt(n); i+=2)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
short IsHuiWenShu(int n)
{
	int len = (int)(log(n)/log(10))+1;
	int i;
	for(i=0; i<len/2; i++)
	{	
		if((n/(int)pow(10,i)%10)!=(n/(int)pow(10,len-i-1)%10))
			return 0;
	}
	return 1;
}
int main()
{
	int m, n;
	short flag = 0;
	scanf("%d%d", &m, &n);
	for(; m<=n; m++)
	{
		if(IsPremium(m)&&IsHuiWenShu(m))
		{
			if(flag) printf(",");
			printf("%d", m);
			flag = 1;
		}
	}
	if(!flag)
		printf("no");
	return 0;
}