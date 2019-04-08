int main()
{
	int n,a[50000],b[50000];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	int shuzhou[10000];
	for(i=0;i<10000;i++)
	{
		shuzhou[i]=0;
	}
	int m;
	for(i=0;i<n;i++)
	{
		for(m=a[i]*2;m<=b[i]*2;m++)
		{
			shuzhou[m]=1;
		}
	}
    int min=a[0],max=b[0];
	for(i=0;i<n;i++)
	{
			if(a[i]<min)
			{
				min=a[i];
			}
		
	}
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	int panduan=1;
	for(i=min*2;i<=max*2;i++)
	{
		if(shuzhou[i]==0)
		{
			panduan=0;
			break;
		}
	}
	if (panduan==0)
	{
		printf("no");
	}
	if(panduan==1)
	{
		printf("%d %d",min,max);
	}
	return 0;
}
