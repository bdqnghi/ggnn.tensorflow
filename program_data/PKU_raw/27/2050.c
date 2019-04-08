int main()
{
	int n;
	cin>>n;
	double a,b,c;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		double d=b*b-4*a*c;
		if(d>0)
		{
			double x1=(-b + sqrt(d))/(2*a);
			double x2=(-b - sqrt(d))/(2*a);
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
		}
		if(d==0)
		{
                             double x=(-b)/(2*a);
			cout<<"x1=x2="<<fixed<<setprecision(5)<<x<<endl;
		}
		if(d<0)
		{
			double m;
                             if(b==0)m=0;
                             if(b!=0)m=(-b)/(2*a);
                             double n=(sqrt(-d))/(2*a);
			cout<<fixed<<setprecision(5)<<"x1="<<m<<"+"<<n<<"i;x2="<<m<<"-"<<n<<"i"<<endl;
		}
	}
	return 0;
}
