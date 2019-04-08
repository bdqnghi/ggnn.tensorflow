int main()
{
	int n,i,j,temp,k,b[100];
	double a[100][1000],sum=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		
		for(j=0;j<b[i];j++)
		{
			scanf("%lf",&a[i][j]);
			sum+=a[i][j];
		}
		sum=sum/b[i];
		for(j=0;j<b[i];j++)
		{
			s+=(a[i][j]-sum)*(a[i][j]-sum);
		}
		s/=b[i];
		s=sqrt(s);
		printf("%.5lf\n",s);
		s=0;
		sum=0;
	}
	
	
	
	
	
	
				
				
	return 0;
}

