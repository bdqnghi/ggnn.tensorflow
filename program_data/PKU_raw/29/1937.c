int fibonacci(int n)
{
	int a;
	if (n==1||n==2)
		a=1;
	else a=fibonacci(n-1)+fibonacci(n-2);
	return a;
}
int main()
{
	int m,i,j;
	scanf("%d",&m);
	for (i=1;i<=m;i++)
	{
		int n;
		double fenzi,fenmu,result,sum=0.0;
		scanf("%d",&n);
		for (j=1;j<=n;j++)
		{
			fenzi=fibonacci(j+2);
			fenmu=fibonacci(j+1);
			result=fenzi/fenmu;
			sum=sum+result;
		}
		printf("%.3f\n",sum);
	}
	return 0;
}