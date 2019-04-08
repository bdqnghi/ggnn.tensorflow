int main()
{
	int n,m;
	float a,b,c;
	double x1,x2;
	cin>>n;
	for(m=1;m<=n;m=m+1)
	{
		cin>>a>>b>>c;
	    x1=(-b+sqrt(b*b-4*a*c))/(2*a),x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	if(b*b-4*a*c>0)
	{
		cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
	}
	else if(b*b-4*a*c<=0)
	{
		if(b*b-4*a*c==0)
		{
		cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		}
		else
		{
			cout<<fixed<<setprecision(5)<<"x1="<<-b/(2*a)+1-1<<"+"<<sqrt(4*a*c-b*b)/(2*a)<<"i"<<";"<<"x2="<<-b/(2*a)+1-1<<"-"<<sqrt(4*a*c-b*b)/(2*a)<<"i"<<endl;
		}
	}
	}
	return 0;
}
