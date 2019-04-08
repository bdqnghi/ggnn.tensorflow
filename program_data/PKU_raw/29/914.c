int main()
{
	int n,i,j,k,zi[1000],mu[1000];
	double sum,div[1000];
	zi[0]=2;
	zi[1]=3;
	mu[0]=1;
	mu[1]=2;
	div[0]=2.0;
	div[1]=1.5;
	for(i=2;i<1000;i++)
	{
		zi[i]=0;
		mu[i]=0;
		
	}
	for(i=2;i<1000;i++)
	{
		zi[i]=zi[i-1]+zi[i-2];
		mu[i]=mu[i-1]+mu[i-2];
		
		div[i]=(1.0*zi[i])/(1.0*mu[i]);
		
		

	}
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>k;
		for(i=0;i<k;i++)
		{
			sum+=div[i];
		}
		printf("%.3lf",sum);
		cout<<endl;
		sum=0;
	}
	return 0;
}


