int main()
{
	int a[100][100]={0};
	int n,i,j,i1,j1,i2,i3,j3,p=0,q=0,sum=0;
	scanf("%d",&n);
	for(i2=0;i2<=n-1;i2++)
	{
		scanf("%d %d",&i,&j);
		for(i1=0;i1<=i-1;i1++)
		{
			for(j1=0;j1<=j-1;j1++)
			{
				scanf("%d",&a[i1][j1]);
			}
		}
		for(i3=0;i3<=j-1;i3++)
		{
			sum=sum+a[0][i3]+a[i-1][i3];
		}
		for(j3=0;j3<=i-1;j3++)
		{
			sum=sum+a[j3][0]+a[j3][j-1];
		}
		sum=sum-a[0][j-1]-a[i-1][0]-a[i-1][j-1]-a[0][0];
		printf("%d\n",sum);
		sum=0;
		for(i1=0;i1<=i-1;i1++)
		{
			for(j1=0;j1<=j-1;j1++)
			{
				a[i1][j1]=0;
			}
		}

	}
	return 0;
}