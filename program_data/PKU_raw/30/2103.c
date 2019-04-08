int main()
{
	int n,i,a,sum;
	sum=0;
	a=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=i%10;
		if(i%7==0)
		{
			continue;
		}
		else if(a==7)
		{
			continue;
		}
		else if(i==70+a)
		{
			continue;
		}
		sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}
		