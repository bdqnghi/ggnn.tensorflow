int main()
{

	int n=0,i=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{double a,b,c,d;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0)
	{
		if(b!=0)cout<<fixed<<setprecision(5)<<"x1=x2="<<(-b/(2*a))<<endl;
		if(b==0)cout<<fixed<<setprecision(5)<<"x1=x2="<<b<<endl;
	}
	else if(d>0)
	{
		if(b!=0)cout<<fixed<<setprecision(5)<<"x1="<<(-b+sqrt(d))/(2*a)<<';'<<"x2="<<(-b-sqrt(d))/(2*a)<<endl;
		if(b==0)cout<<fixed<<setprecision(5)<<"x1="<<sqrt(d)/(2*a)<<';'<<"x2="<<-sqrt(d)/(2*a)<<endl;
	}
	else if(d<0)
	{
		if(b!=0)cout<<fixed<<setprecision(5)<<"x1="<<(-b)/(2*a)<<'+'<<sqrt(-d)/(2*a)<<'i'<<';'<<"x2="<<(-b)/(2*a)<<'-'<<sqrt(-d)/(2*a)<<'i'<<endl;
		if(b==0)cout<<fixed<<setprecision(5)<<"x1="<<b<<'+'<<sqrt(-d)/(2*a)<<'i'<<';'<<"x2="<<b<<-sqrt(-d)/(2*a)<<'i'<<endl;
	}
	}
	return 0;
}