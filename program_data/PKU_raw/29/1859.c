int main()
{
	int m, a[1000], i, j;float b[1000];
	float sum[1000];
	scanf("%d", &m);
	b[1]=1;
	b[2]=2;
	for(i=0;i<m;i++)
	{
		scanf("%d", &a[i]);
		sum[i]=0;
		for(j=1;j<=a[i];j++)
		{
			sum[i]=sum[i]+(b[j+1]/b[j]);
			b[j+2]=b[j]+b[j+1];
			
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%.3f\n", sum[i]);
	}
	return 0;
}