int main()
{
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		double a=0,b=0,c=0;
		cin>>a>>b>>c;
		if(b*b-4*a*c==0)
		{
			cout<<"x1=x2="<<fixed<<setprecision(5)<<-b/(2*a)<<endl;
		    continue;
		}
		if(b*b-4*a*c>0)
		{
			cout<<"x1="<<fixed<<setprecision(5)<<(-b + sqrt(b*b-4*a*c))/(2*a)
			    <<";x2="<<(-b - sqrt(b*b-4*a*c))/(2*a)<<endl;
			continue;
		}
		if(b*b-4*a*c<0)
		{
			if(b/(2*a)==0)
				cout<<fixed<<setprecision(5)<<"x1="<<b/(2*a)<<"+"<<sqrt(-(b*b-4*a*c))/(2*a)
				   <<"i;x2="<<b/(2*a)<<"-"<<sqrt(-(b*b-4*a*c))/(2*a)<<"i"<<endl;
			else
				cout<<fixed<<setprecision(5)<<"x1="<<-b/(2*a)<<"+"<<sqrt(-(b*b-4*a*c))/(2*a)
				    <<"i;x2="<<-b/(2*a)<<"-"<<sqrt(-(b*b-4*a*c))/(2*a)<<"i"<<endl;
			continue;
		}
	}
	return 0;
}
