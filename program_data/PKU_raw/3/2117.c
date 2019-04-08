
int max(int a)
{
	if (a%7==0) return 1;
	if ((a-7)%10==0) return 1;
	if ((a/10==7)) return 1;
	return 0;
}
void main()
{
	long n,i,k,j,a[1001];
	double sum,num;
	scanf("%ld%ld",&n,&k);
	num=1.0;
	sum=1;
	for (i=1;i<=n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for (i=1;i<=n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i]+a[j]==k)
			{
				printf("yes");
				return;
			}
	printf("no");
}
