
int main()
{
	int n,a[50000],b[50000],i,j,max=0,min=10000,x,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	for(j=0;j<n;j++)
	{
		for(i=n-1;i>j;i--)
		{
			if(a[i]<a[i-1])
			{
				x=a[i];
				a[i]=a[i-1];
				a[i-1]=x;
				x=b[i];
				b[i]=b[i-1];
				b[i-1]=x;
			}
		}
	}
	for(j=1;j<n;j++)
	{
		flag=0;
		for(i=0;i<j;i++)
		{
			if(b[i]>=a[j])
			{
				flag=1;
			}
		}
		if(!flag) break;
	}
	if(!flag)
	{
		printf("no\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
			if(b[i]>max)
			{
				max=b[i];
			}
		}
		printf("%d %d\n",min,max);
	}
	return 0;
}
