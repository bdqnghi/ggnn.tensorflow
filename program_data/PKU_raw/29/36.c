int main()
{
	int n,i,j,k;
	float a[201],sum[100];
	for(i=1;i<=200;i++)
	{
		if(i==1){a[i]=1;}
		else if(i==2){a[i]=2;}
		else {a[i]=a[i-1]+a[i-2];}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		sum[i]=0;
		for(j=0;j<k;j++)
		{
			sum[i]=sum[i]+(a[j+2]/a[j+1]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%.3f\n",sum[i]);
	}
	return 0;
}
