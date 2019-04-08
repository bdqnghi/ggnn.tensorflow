int main()
{
	int k,i;
	double x[100],y[100],a[100],b[100],c[100],p[100],n[100];
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		p[i]=b[i]*b[i]-4*a[i]*c[i];
		if(p[i]>0)
		{
			x[i]=((-b[i])+sqrt(p[i]))/2/a[i];
			y[i]=((-b[i])-sqrt(p[i]))/2/a[i];
		}
		else if(p[i]==0)
			x[i]=(-b[i])/2/a[i];
		else
		{
			x[i]=(-b[i])/2/a[i];
			y[i]=(-b[i])/2/a[i];
			n[i]=sqrt(0-p[i])/2/a[i];
		}
	}
	for(i=1;i<=k;i++)
	{
		cout<<fixed<<setprecision(5);
		if(p[i]>0)
		{
			cout<<"x1="<<x[i]<<";x2="<<y[i]<<endl;
		}
		else if(p[i]==0)
			cout<<"x1=x2="<<x[i]<<endl;
		else
		{
			if(x[i]==-0)
				cout<<"x1="<<-x[i]<<"+"<<n[i]<<"i"<<";x2="<<-y[i]<<"-"<<n[i]<<"i"<<endl;
			else
				cout<<"x1="<<x[i]<<"+"<<n[i]<<"i"<<";x2="<<y[i]<<"-"<<n[i]<<"i"<<endl;
		}
	}
	return 0;
}
