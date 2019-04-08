int main()
{
	int i,j,m,n[100],a[100][100],b[100][100];
	double c[100][100],sum=0.0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}

	for(i=0;i<m;i++)
	{
		a[i][0]=2;
		a[i][1]=3;
		b[i][0]=1;
		b[i][1]=2;
		for(j=0;j<n[i];j++)
		{
			a[i][j+2]=a[i][j]+a[i][j+1];
			b[i][j+2]=b[i][j]+b[i][j+1];
			c[i][j]=1.0*a[i][j]/b[i][j];
			sum+=c[i][j];
		}
		printf("%.3f\n",sum);
		sum=0;
	}
	return 0;
}