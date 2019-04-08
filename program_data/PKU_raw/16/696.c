int main()
{
	int n,i,a[6];
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(n==n%10)
		{
			i=i+5;
			printf("%d",n);
		}
		else
		{
			a[i]=n%10;
			n=n/10;
			printf("%d",a[i]);
		}
	}
	return 0;
}
