int main()
{
	int m,i,j,fenzi[1000],fenmu[1000];
	scanf("%d",&m);
	int*xiangshu=(int*)malloc(sizeof(int)*m);
	double*sum=(double*)malloc(sizeof(double)*m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&xiangshu[i]);
	}
	fenzi[0]=2;
	fenzi[1]=3;
	fenmu[0]=1;
	fenmu[1]=2;
	for(i=2;i<1000;i++)
	{
		fenzi[i]=fenzi[i-1]+fenzi[i-2];
	}
	for(i=2;i<1000;i++)
	{
		fenmu[i]=fenmu[i-1]+fenmu[i-2];
	}
	for(i=0;i<m;i++)
	{
		sum[i]=0;
		for(j=0;j<xiangshu[i];j++)
		{
			sum[i]+=fenzi[j]*1.0/fenmu[j];
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%.3lf\n",sum[i]);
	}
	free(xiangshu);
	return 0;
}