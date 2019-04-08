int main()
{
	int k;
	cin>>k;
	int i,j,n;
	double x[1001],*p;
	double sum,sum2,eve,s;
	for(i=0;i<k;i++)
	{
		sum=0,sum2=0;
		cin>>n;
		p=x;
		for(j=0;j<n;j++)
		{
			cin>>*p;
			sum=sum+*p;
			sum2=sum2+(*p)*(*p);
		}
		eve=sum/n;
		s=sqrt((sum2+n*eve*eve-2*sum*eve)/n);
		cout<<fixed<<setprecision(5)<<s<<endl;
		
	}
	
	return 0;	
}