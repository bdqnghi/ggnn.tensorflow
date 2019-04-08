int main()
{
	int n,i,a,max=0,max2=0;
	scanf("%d",&n);
	scanf("%d",&a);
	max=a,max2=a;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>max)
		{
			max=a;
		}
		else
		{
			if(a>max2)
			{
				max2=a;
			}
		}
	}
	printf("%d\n%d",max,max2);
	return 0;
}
