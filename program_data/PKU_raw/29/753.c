int main()
{
	int m,n,i,j,a=2,b=1,c;
	double sum=2.0;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>n;
		for(j=1;j<n;j++)
		{
			c=b;
			b=a;
			a=a+c;
			sum=sum+a*1.0/b;
		}
		cout<<fixed<<setprecision(3)<<sum<<endl;
		a=2,b=1,sum=2.0;
	}
	return 0;
}