int main()
{
	int n,a[50000],b[50000],i,j,max,min,c[10001]={0},k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=a[i];j<b[i];j++)
		{
			c[j]++;
		}
	}
	for(i=min;i<max;i++)
	{
		if(c[i]==0)
		{
			printf("no");
			k++;
			break;
		}
	}
	if(k==0)
		printf("%d %d",min,max);
}








