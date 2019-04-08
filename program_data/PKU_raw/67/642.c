int main()
{
	int n,i,a[100],b[100];
	double c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=(double)b[i]/a[i];
	}
	for(i=1;i<n;i++)
	{
		if(c[i]-c[0]>0.05)
		{
			printf("better");
		}
		else if(c[0]-c[i]>0.05)
		{
			printf("worse");
		}
		else
		{
			printf("same");
		}
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}