int main()
{
	int n,i;
	cin>>n;
	double a[n],b[n],c[n],p,q,x1=0,x2=0;
	for(i=0;i<n;i=i+1)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for(i=0;i<n;i=i+1)
	{
		p=(-1)*b[i]/(2*a[i]);
		q=pow(b[i],2)-4*a[i]*c[i];
		if(q==0)
		{
			x1=x2=p;
			if(p>-0.00000001 && p<0.00000001) p=0;
			cout<<fixed<<setprecision(5)<<"x1="<<"x2="<<p<<endl;
		}
			else if(q>0)
				{
				x1=p+sqrt(q)/(2*a[i]);
				x2=p-sqrt(q)/(2*a[i]);
				if (x1>-0.00000001 && x1<0.0000001) x1=0.0000;
				cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
				}
		if(q<0)
		{
			q=sqrt(-q)/(2*a[i]);
			if(p>-0.00000001 && p<0.00000001) p=0;
			cout<<fixed<<setprecision(5)<<"x1="<<p<<"+"<<q<<"i"<<";"<<"x2="<<p<<"-"<<q<<"i"<<endl;
		}
	}



   return 0;
}