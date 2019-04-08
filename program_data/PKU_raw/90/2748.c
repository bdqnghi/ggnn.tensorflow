int solve(int panzi,int pingguo )
{
	if(panzi==1)
	{
		return 1;
	}
	else
	{
		if(panzi<=pingguo)
		{
			return solve(panzi-1,pingguo)+solve(panzi,pingguo-panzi);
		}
		else
		{
			return solve(panzi-1,pingguo);
		}
	}
}
int main()
{
	int t,M,N;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&M,&N);
		printf("%d\n",solve(N,M));
	}
	
}