int main()
{
	int n;
	int i,j;
	int a[300];
	float b[300];
	int c[300];
	int t=0;
	int sum=0;
	int temp;
	float ave;
	float max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	ave=(float)sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]-ave>=0)
			b[i]=a[i]-ave;
		else
			b[i]=ave-a[i];
		if (b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			c[t]=a[i];
			t++;
		}
	}
	for(i=1;i<t;i++)
	{
		for(j=0;j<t-i;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	for(i=0;i<t-1;i++)
		printf("%d,",c[i]);
	printf("%d",c[t-1]);
	return 0;
}



