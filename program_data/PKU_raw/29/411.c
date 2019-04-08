void main()
{
	double sum[199]={0},a[199];
	int n,i,m,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m);
		sum[j]=2;
		for(i=1;i<m;i++)
		{
			a[0]=2;
		   a[i]=1+1/a[i-1];
		   sum[j]+=a[i];
		}
	}
	for(j=0;j<n;j++)
	{
	      printf("%.3lf\n",sum[j]);
	}
}
