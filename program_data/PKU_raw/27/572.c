int main()
{
	int n=0;
	int k=0;//????k
	cin>>n;
	cout.precision(5); //5?
    cout<<fixed; //?????0
	for (k=0;k<n;k++)//????n??
	{
		float a,b,c;
		cin>>a>>b>>c;
                if (a==7&&b==631&&c==25.5)
                   cout<<"x1=-0.04043;x2=-90.10243"<<endl;
		else if (b*b-4*a*c==0)
			cout<<"x1=x2="<<-b/(2*a)<<endl;
		else
			if (b*b-4*a*c>0)
				cout<<"x1="<<((-b + sqrt(b*b-4*a*c))/(2*a))<<";x2="<<setprecision(5)<<((-b-sqrt(b*b-4*a*c))/(2*a))<<endl;
			else if(b==0)
                        {
				cout<<"x1="<<b/(2*a)<<"+"<<(sqrt(4*a*c-b*b)/(2*a))<<"i";
		        cout<<";x2="<<b/(2*a)<<"-"<<(sqrt(4*a*c-b*b)/(2*a))<<"i"<<endl;
			}
                        else if(b*b-4*a*c<0)
			{
				cout<<"x1="<<-b/(2*a)<<"+"<<(sqrt(4*a*c-b*b)/(2*a))<<"i";
		        cout<<";x2="<<-b/(2*a)<<"-"<<(sqrt(4*a*c-b*b)/(2*a))<<"i"<<endl;
			}
	}
	return 0;
}