int main()
{
	int i,n;
	int reverse(int num);
	for (i=0;i<6;i++)
	{
		scanf("%d",&n);
		printf("%d\n",reverse(n));
	}
	return 0;
}

int reverse(int num)
{
	int ans=0;
	do
	{
		ans = ans*10+num%10;
		num = num / 10;
	}
	while (num!=0);
	return ans;
}
