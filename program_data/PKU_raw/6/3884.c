int main()
{
	int k,m,n,a[100][100],i1,i2,i3,j,total;
	scanf("%d",&k);
	for(i1=1;i1<=k;i1++)
	{
		scanf("\n%d %d",&m,&n);
		total=0;
		for(i2=0;i2<=m-1;i2++)
		{
			scanf("\n%d",&a[i2][0]);
			for(i3=1;i3<=n-1;i3++)
			{
				scanf(" %d",&a[i2][i3]);
			}
		}//input

		if(m==1&&n==1)
		{
			total=a[0][0];
			printf("%d\n",total);
			continue;
		}
		for(i2=0;i2<=n-1;i2++)
		{
			total=total+a[0][i2]+a[m-1][i2];
		}
		for(i2=0;i2<=m-1;i2++)
		{
			total=total+a[i2][0]+a[i2][n-1];
		}
		total=total-a[0][0]-a[0][n-1]-a[m-1][0]-a[m-1][n-1];

		printf("%d\n",total);


	}
}