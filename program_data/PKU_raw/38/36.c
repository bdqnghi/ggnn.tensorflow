int main()
{
	int group;
	scanf("%d",&group);

	int i;
	for(i=0;i<group;i++)
	{
		int num;
		scanf("%d",&num);

		double *sz=(double*)malloc(sizeof(double)*num);
		int j;
		for(j=0;j<num;j++)
		{
			scanf("%lf",&sz[j]);
		}
		double sum=0;
		for(j=0;j<num;j++)
		{
			sum=sum+sz[j];
		}
		double aver;
		aver=sum/num;
		double mid=0;
		for(j=0;j<num;j++)
		{
			mid=mid+(sz[j]-aver)*(sz[j]-aver);
		}
		double re;
		re=sqrt(mid/num);

		printf("%.5lf\n",re);

		free(sz);

	}
	return 0;
}