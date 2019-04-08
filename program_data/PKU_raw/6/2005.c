void juzhen(int m,int n)
{
	int a[100][100];
	int i,j,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	for(j=0;j<n;j++)
	{
		sum=sum+*(*(a)+j)+*(*(a+m-1)+j);
	}
	for(i=1;i<m-1;i++)
	{
		sum=sum+*(*(a+i)+0)+*(*(a+i)+n-1);
	}
	if(m==1)
	{
		sum=0;
		for(i=0;i<n;i++)
			sum=sum+*(*a+i);
	}
	if(n==1)
	{
		sum=0;
		for(i=0;i<m;i++)
			sum=sum+*(*(a+i)+0);
	}
	printf("%d\n",sum);
}
int main()
{
	int k,i,m,n;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&m,&n);
		juzhen(m,n);
	}
}