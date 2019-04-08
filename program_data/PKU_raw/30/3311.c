int main()
{
	int n, i, b;
	int sum=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		b=i/10;
		if(i%7==0||b==7||i-10*b==7)
		{
			continue;
		}
		sum += i*i;
	}
	printf("%d", sum);
	return 0;
}