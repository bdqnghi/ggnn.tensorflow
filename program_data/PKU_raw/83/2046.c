
int main()
{
	double chengji[10],xuefen[10],total=0;
	int i,j,n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&xuefen[i]);
		total+=xuefen[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%lf",&chengji[i]);
	}

	int a[10]={90,85,82,78,75,72,68,64,60};
	double b[10]={4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.5,1.0,0};
	double sum=0;

	for (i=0;i<n;i++)
	{
		j=0;
		while (a[j]>chengji[i])
			j++;
		
		sum+=xuefen[i]*b[j];

	}
	sum /=total;
	printf("%.2f\n",sum);
	return 0;
}
