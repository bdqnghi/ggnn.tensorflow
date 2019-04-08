int main()
{
	int n, a_, i, j=0, isbreak, a[10000], count=0, count_=0;
	scanf("%d", &n);
	for(a_=1; a_<=n; a_++)
	{	
		for(i=2; i<=a_; i++)
		{
			if(a_%i==0 && i!=a_)
				break;
			if(i==a_)
			{
				isbreak=1;
				break;
			}
		}
		if(isbreak==1)
		{
			a[j]=a_;
		    j++;
		}
		isbreak=0;
	}
	count=j;
	for(j=0; j<count; j++)
	{
		if(a[j+1]-a[j]==2)
		{
			count_++;
			printf("%d %d\n", a[j], a[j+1]);
		}
	}
	if(count_==0)
		printf("empty\n");
	return 0;
}
