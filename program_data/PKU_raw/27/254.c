int main()
{
	int n,k;
	cin>>n;
	for(k=1;k<=n;k++)
	{
		float a,b,c;
		double x1,x2;
		cin>>a>>b>>c;
		cout<<fixed;
		if((b*b-4*a*c)>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a) ;
			if (fabs(x1) < 1e-5)
			{
				x1 = 0;
			}
			else if (fabs(x2) < 1e-5)
			{
				x2 = 0;
			}
			cout<<"x1="<<setprecision(5)<<x1<<";"<<"x2="<<setprecision(5)<<x2<<endl;
		}
		else if((b*b-4*a*c)==0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
			if (fabs(x1) < 1e-5)
			{
				x1 = 0;
			}
			cout<<"x1=x2="<<setprecision(5)<<x1<<endl;
		}
	    else
		{
			double a1,b1;
			a1=(-b/(2*a));
			b1=(sqrt(4*a*c-b*b)/2/a);
			if(fabs( a1)<=1e-5)
			{
				a1=0;
			}
			else if(fabs(b1) < 1e-5)
			{
				b1=0;
		    }
			cout<<"x1="<<setprecision(5)<<a1<<"+"<<b1<<"i"<<";"<<"x2="<<setprecision(5)<<a1<<"-"<<b1<<"i"<<endl;
		}
	}
	return 0;
}