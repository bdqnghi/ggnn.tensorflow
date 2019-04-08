int main()
{
	int m,n,i,j;
	double ave,num[100][1000],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		ave=0;sum=0;
		for(j=0;j<m;j++)
		{
			scanf("%lf",&num[i][j]);
			sum=sum+num[i][j];
		}
		ave=(double)sum/m;
		sum=0;
		for(j=0;j<m;j++)
		{
			num[i][j]=num[i][j]-ave;
			num[i][j]=num[i][j]*num[i][j];
			sum=sum+num[i][j];
		}
		ave=(double)sum/m;
		ave=(double)sqrt(ave);
		printf("%.5lf\n",ave);
	}
}



