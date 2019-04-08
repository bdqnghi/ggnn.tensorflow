int main()
{
	int n,i,e,k,d,f,hours;
	int sz[100][2];
	int a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(e=0;e<2;e++)
		{
			scanf("%d",&sz[i][e]);
		}
	}
	hours=0;
	for(i=0;i<n;i++)
	{
		if(sz[i][0]>=90&&sz[i][0]<=140&&sz[i][1]>=60&&sz[i][1]<=90)
		{
			a[hours]++;
		}
		else
		{
			hours++;
		}
	}
    for(k=1;k<=hours;k++)
	{
		for(d=0;d<=hours-k;d++)
		{
			if(a[d]>a[d+1])
			{
				f=a[d+1];
				a[d+1]=a[d];
				a[d]=f;
			}
		}
	}
	printf("%d",a[hours]);
	return 0;

}