
void main()
{
	int i,a[100],n,max,max2;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if (a[0]>a[1]) 
	{
		max=a[0];
		max2=a[1];
	}
	else 
	{
		max=a[1];
		max2=a[0];
	}
	for (i=2;i<n;i++)
	{
		if (a[i]>max) 
		{
			max2=max;
			max=a[i];
		}
		else if (a[i]<=max&&a[i]>max2)
			max2=a[i];
		
	}
	printf("%d\n%d\n",max,max2);
}