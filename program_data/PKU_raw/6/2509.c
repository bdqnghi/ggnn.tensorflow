int main()
{
	int n,i,j,sum[10000]={0};
	int a[100][100]={0},k;
	int *p=sum,x,y;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d %d",&x,&y);
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
				scanf("%d",&a[i][j]);
		}
		if(x!=1)
		{
			for(j=0;j<y;j++)
			{
				*(p+k)+=a[0][j]+a[x-1][j];
			}
			for(i=1;i<x-1;i++)
			{
				*(p+k)+=a[i][0]+a[i][y-1];
			}
		}
		else
		{
			for(j=0;j<y;j++)
			{
				*(p+k)+=a[0][j];
			}
		}
	}
	for(;p<(sum+n);p++)
	{
		printf("%d\n",*p);
	}
	return 0;
}
