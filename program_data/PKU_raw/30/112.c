
int main()
{
	int n,i;
	int sum=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
			sum=sum+i*i-i*i;
		else if(i%2==1 && i%5==2)
			sum=sum+i*i-i*i;
		else if(i>=70 && i<=76)
			sum=sum+i*i-i*i;
		else if(i==78 || i==79)
			sum=sum+i*i-i*i;
		else
		sum=sum+i*i;
	}
	printf("%d", sum);

	return 0;
}