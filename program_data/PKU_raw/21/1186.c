float juedui(float x)
{
	if(x>=0)
	{
		return x;
	}
	else
	{
		return (-1*x);
	}
}
int main()
{
	int x[100];
	int n;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i-1]);
	}
	float aver=0;
	for(i=1;i<=n;i++)
	{
		aver+=x[i-1];
	}
	aver/=n;
	float max=x[0]-aver;
	for(i=1;i<=n;i++)
	{
		if(max<juedui(x[i-1]-aver))
		{
			max=juedui(x[i-1]-aver);
		}
		else
		{}
	}
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(juedui(x[i-1]-aver)==max)
		{
			if(count==0)
			{
				printf("%d",x[i-1]);
			}
			else
			{
				printf(",%d",x[i-1]);
			}
			count++;
		}
		else
		{}
	}
	return 0;
}