int main()
{
	int m,n[100],i,k;
	double  sum[100],a[100]={0,2};
	scanf("%d",&m);
	

	for(i=2;i<100;i++)
	{
		a[i]=1+1/a[i-1];

	}
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&(n[i]));
	}

	for(i=0;i<m;i++)
	{
		sum[i]=0;
		for(k=1;k<=n[i];k++)
		{
			sum[i]+=a[k];
		}
		printf("%.3lf\n",sum[i]);
	}
	



	
	
	return 0;	 
}
