int main()
{
	int num[100],ynum[100];
	int n;
	int i;
	double a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&num[i],&ynum[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=(double)ynum[i]/num[i]*100;
	}
	for(i=1;i<n;i++)
	{
		if(a[i]-a[0]>5) printf("better\n");
		else if(a[0]-a[i]>5) printf("worse\n");
		else printf("same\n");
	}
	return 0;
}