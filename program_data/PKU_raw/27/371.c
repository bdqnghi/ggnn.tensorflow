int main()
{
	int n=0,i=0;
	double a=0,b=0,c=0,x1=0,x2=0,k=0,e=0,f=0;
	cin>>n;
	for(i=1;i<=n;i=i+1)
	{
		cin>>a>>b>>c;
		k=b*b-4*a*c;
		if(k>0)
		{
			x1=(-b+sqrt(k))/(2*a);
			x2=(-b-sqrt(k))/(2*a);
			cout<<setprecision(5)<<fixed<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
		}
        else if(k==0)
		{
			x1=(-b)/(2*a);
            cout<<setprecision(5)<<fixed<<"x1=x2="<<x1<<endl;
		}
		else
		{
			e=(-b)/(2*a);
			f=(sqrt(-k))/(2*a);
			if(e==0)
			{
				cout<<setprecision(5)<<fixed<<"x1=0.00000"<<"+"<<f<<"i"
				<<";"<<"x2=0.00000"<<"-"<<f<<"i"<<endl;
			}
			else
			{
				cout<<setprecision(5)<<fixed<<"x1="<<e<<"+"<<f<<"i"
				<<";"<<"x2="<<e<<"-"<<f<<"i"<<endl;
			}

		}
	}
	return 0;
}