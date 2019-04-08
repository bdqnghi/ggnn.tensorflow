int main()
{
	int k,n,i;
	cin>>k;
	double S,mean,sum=0;
	while(k--)
	{
		double num[101];
		double *p=num;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num[i];
			sum+=num[i];
		}
		mean=sum/n;
		sum=0;
		while(i>0)
			sum+=pow(*(p+(--i))-mean,2);
		mean=sum/n;
		S=sqrt(mean);
		sum=0;
		cout<<fixed<<setprecision(5)<<S<<endl;
	}
	return 0;
}
	