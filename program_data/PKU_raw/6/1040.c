int main()
{
	int k,m,n;
	int sum1,sum2,sum3,sum4;
	int i,j,l;
	int a[100][100],b[100];
	
	scanf("%d",&k);
	for(l=1;l<=k;l++)
	{
		sum1=0;
		sum2=0;
		sum3=0;
		sum4=0;
		scanf("%d %d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		}
		for(j=0;j<n;j++)
			sum1=sum1+a[0][j];
		for(i=1;i<m;i++)
			sum2=sum2+a[i][n-1];
		for(j=0;j<n-1;j++)
			sum3=sum3+a[i-1][j];
		for(i=1;i<m-1;i++)
			sum4=sum4+a[i][0];
		b[l]=sum1+sum2+sum3+sum4;
	}
	for(l=1;l<=k;l++)
		printf("%d\n",b[l]);
	return 0;
	

}