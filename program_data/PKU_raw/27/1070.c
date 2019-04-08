int main()
{
	int n,i;
	double a,b,c,k,s,l;
	cin>>n;
	cout<<fixed;
	cout.precision(5);
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if(b*b-4*a*c>=0)
		{
			k=sqrt(b*b-4*a*c);
			if(k==0)
			{
				if(b==0)
					s=0;
				else
				    s=-b/(2*a);
				cout<<"\nx1=x2="<<s;
			}
			else
			{
				s=(-b+k)/(2*a);
				l=(-b-k)/(2*a);
				cout<<"\nx1="<<s<<";x2="<<l;
			}
		}
		else
		{
			k=sqrt(4*a*c-b*b);
			if(b==0)
				s=0;
			else
			    s=-b/(2*a);
			l=k/(2*a);
			cout<<"\nx1="<<s<<"+"<<l<<"i;x2="<<s<<"-"<<l<<"i";
		}
	}
	return 0;
}