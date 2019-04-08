int main()
{
	int a[1010]={0};
	int x[1010],y[1010];
	char c=',';
	int n=0;
	int i,j;
	i=1;
	while(c!=10)
	{
		scanf("%d%c",&x[i],&c);
		n++;
		i++;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d%c",&y[i],&c);
	}
	printf("%d ",n);
	for(i=1;i<=n;i++)
	{
		for(j=x[i];j<y[i];j++)
		{
			a[j]++;
		}
	}
	int max=0;
	for(i=0;i<1010;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%d",max);
}