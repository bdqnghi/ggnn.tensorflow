int main()
{
	int i,j;
	int n,m;
	int min,max,tail;
	int a[50000],b[50000];
	
	
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	min=a[0];
	tail=b[0];
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
		if(b[i]<tail)
		{
			tail=b[i];
		}
	}
	for (j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if ((a[i]<=tail)&&(b[i]>=tail))
			{
				tail=b[i];
			}
		}
	}
	if(tail==max)
	{
		printf("%d %d",min,max);
	}
	else
	{
		printf("no");
	}

    return 0;
}
