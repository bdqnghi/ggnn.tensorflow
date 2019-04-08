int main ()
{
	int n,m;
	double x[1010],sum,a,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		sum=0;s=0;a=0;
		for(int j=0;j<m;j++)
		{
			cin>>*(x+j);
			sum=sum+*(x+j);
		}
		a=sum/m;
		for(int j=0;j<m;j++)
		{
			s=s+pow(*(x+j)-a,2);
		}
		s=s/m;s=sqrt(s);
		cout<<fixed<<setprecision(5)<<s<<endl;
	}
	return 0;
}