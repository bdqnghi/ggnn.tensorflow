int main()
{
	int n,a[50000],b[50000],min=10000,max=0,e=1,p=0;
float j;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]<min)min=a[i];
		if(b[i]>max)max=b[i];
	}
	j=min+0.0;
	while(j<=max)
	{
		for(int k=0;k<=n-1;k++)
		{
			if(b[k]>=j && j>=a[k])
			{
				break;
			}
			if(k==n-1)p=1;
		}
	j=j+0.5;
	}
	if(p==1)printf("no");
	else
	{
		printf("%d %d",min,max);
	}
	return 0;
}
