int main()
{
	int i,n;
	double a[100],b[100],c[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for(i=0;i<n;i++)
	{
		if((b[i]*b[i]-4*a[i]*c[i])>0)
			cout<<"x1="<<fixed<<setprecision(5)<<(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i])<<";x2="<<fixed<<setprecision(5)<<(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
		if((b[i]*b[i]-4*a[i]*c[i])==0)
			cout<<"x1=x2="<<fixed<<setprecision(5)<<-b[i]/(2*a[i]);
		if((b[i]*b[i]-4*a[i]*c[i])<0)
		{
			if(b[i]==0)
				cout<<"x1="<<"0.00000"<<"+"<<fixed<<setprecision(5)<<sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i])<<"i;x2="<<"0.00000"<<"-"<<fixed<<setprecision(5)<<sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i])<<"i";
			else
				cout<<"x1="<<fixed<<setprecision(5)<<-b[i]/(2*a[i])<<"+"<<fixed<<setprecision(5)<<sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i])<<"i;x2="<<fixed<<setprecision(5)<<-b[i]/(2*a[i])<<"-"<<fixed<<setprecision(5)<<sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i])<<"i";
		}
		cout<<endl;
	}
	return 0;
}