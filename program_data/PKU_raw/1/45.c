void main()
{
	int ways(int a, int min);
	int n,b;
	scanf("%d",&n);
	while(n-->0)
	{
		scanf("%d",&b);
		printf("%d\n",ways(b,2));
	}
}
int ways(int a, int min)
{
	if(a<min) return 0;
	int sum=0,i;
	for(i=min;i<=sqrt(a*1.0);i++)
	{
		if(a%i == 0)
			sum = sum + ways(a/i, i);
	}
	return sum+1;
}