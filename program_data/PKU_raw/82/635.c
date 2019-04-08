int main(int argc, char* argv[])
{
	int n;
	int a,b;
	int sum=0;
	int x=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		if(90<=a&&a<=140&&60<=b&&b<=90)
		{
			sum++;
		}
		else
		{
			sum=0;
		}
		if(sum>=x)
		{
			x=sum;
		}
	}
	printf("%d",x);
	return 0;
}