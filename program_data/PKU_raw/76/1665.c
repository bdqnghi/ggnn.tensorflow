int main()
{
	int max,min,n,a[len],b[len],i,j,jg[len];
	scanf("%d",&n);
	scanf("%d %d",&a[0],&b[0]);
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(b[i]>max)
		{
			max=b[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	for(i=min;i<max;i++)
	{
		jg[i]=0;
	}
	for(j=0;j<n;j++)
	{
		for(i=a[j];i<b[j];i++)
		{
			jg[i]=1;
		}
	}
	for(i=min;i<max;i++)
	{
	if(jg[i]==0)
		{
			printf("no");
			break;
		}
	if(i==max-1)
		{
			printf("%d %d",min,max);
		}
	
	}
	return 0;
}
