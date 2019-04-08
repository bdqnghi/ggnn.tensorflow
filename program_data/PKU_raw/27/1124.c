int main ()
{
	int n;
	double a,b,c,x1,x2;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if(b*b-4*a*c>0)
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
		}
		else if(b*b-4*a*c==0)
		{
			x1=x2=-(b/(2*a));
			cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		}
		else
		{
			double m,n;
			m=-(b/(2*a));
			n=sqrt(4*a*c-b*b)/(2*a);
			if(m==0)
				m=-m;
			cout<<fixed<<setprecision(5)<<"x1="<<m<<"+"<<n<<"i"<<";"<<"x2="<<m<<"-"<<n<<"i"<<endl;
		}
	}
	return 0;
}

