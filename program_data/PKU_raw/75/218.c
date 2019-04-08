int main()
{
	int a[1001],b[1001];
	int i,j,t,k[1001]={0},flag;
	char c[2002];
	for(i=0,t=0;;i++)
	{
		scanf("%d%c",&a[i],&c[i]);
		t++;
		if(c[i]!=',')
			break;
	}
	scanf("%d",&b[0]);
	for(i=1;i<=t-1;i++)
	{
		scanf(",%d",&b[i]);
	}
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=t-1;j++)
		{
			if(a[j]<=i&&b[j]>=i+1)
				k[i]++;
		}
	}
	for(i=0;i<=999;i++)
	{
		for(j=0;j<=999-i;j++)
		{
			if(k[j]<k[j+1])
			{
				flag=k[j];
				k[j]=k[j+1];
				k[j+1]=flag;
			}
		}
	}
	printf("%d %d",t,k[0]);
	return 0;
}
