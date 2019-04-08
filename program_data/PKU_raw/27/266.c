int main()
{
	int n;
	float a,b,c;
	cin>>n;
	for(n;n>0;n--)
	{
		cin>>a>>b>>c;
		double m=-b/(2*a);
		double deta=b*b-4*a*c;
		if (m==-0)
			m=0;
		if(deta>1e-8)
			cout<<"x1="<<fixed<<setprecision(5)<<m+sqrt(deta)/(2*a)
				<<";x2="<<m-sqrt(deta)/(2*a)<<endl;
		else if(deta<=-1e-8)
			cout<<"x1="<<fixed<<setprecision(5)<<m<<"+"<<fabs(sqrt(-deta)/(2*a))<<"i"
			    <<";x2="<<m<<"-"<<fabs(sqrt(-deta)/(2*a))<<"i"<<endl;
		else
			cout<<fixed<<setprecision(5)<<"x1=x2="<<m<<endl;
	}
		
	return 0;
}