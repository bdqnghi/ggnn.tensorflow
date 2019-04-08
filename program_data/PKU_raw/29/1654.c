int main()
{
	int m,n,i,j;
	int f[100]={1,2};
	scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
		float sum=0;
		scanf("%d",&n);
		for(i=2;i<=n+1;i++)
		{
			f[i]=f[i-2]+f[i-1];
			sum=sum+(float)f[i-1]/f[i-2];    
		}
		printf("%.3f\n",sum);
	}
	return 0;
}