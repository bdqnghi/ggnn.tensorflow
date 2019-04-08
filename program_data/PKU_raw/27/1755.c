int main()
{
	double a,b,c;
	double x1,x2;
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if (b*b-4*a*c>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a);	
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
		} 
		else if (b*b-4*a*c==0)
		{
			x1 = (-b)/(2*a);
			x2 = (-b)/(2*a);	
			cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		}
		else
		{
			if (b==0)
			{
				cout<<fixed<<setprecision(5)<<"x1="<<(0)/(2*a)<<"+"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<";"<<"x2="<<(0)/(2*a)<<"-"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<endl;
			}
			else
			{
				cout<<fixed<<setprecision(5)<<"x1="<<(-b)/(2*a)<<"+"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<";"<<"x2="<<(-b)/(2*a)<<"-"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<endl;
			}
			
		}
	}
	return 0;
}