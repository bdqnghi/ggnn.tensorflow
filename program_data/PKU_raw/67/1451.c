int main()
{
	int n,i,j,k,b[100],c[100];
	double m,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&b[i],&c[i]);
		a[i]=(double)c[i]/b[i];
	}
	for(i=1;i<n;i++)
	{
		if(a[i]-a[0]>0.05)
		{
			printf("better\n");
		}
		else if(a[0]-a[i]>0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}
