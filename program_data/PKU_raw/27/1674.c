float a[100],b[100],c[100];
int main()
	{
		double x1,x2,p,q,s;
		int n,i;
		cin>>n;
		cout<<endl;
		for(i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i]>>c[i];
			cout<<endl;
			if(b[i]*b[i]-4*a[i]*c[i]>=0)
			{
			    x1=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			    x2=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			    if(x1==x2)
			    {
				    cout<<fixed<<setprecision(5)<<"x1=x2="<<x1;
			    }
			    if(x1!=x2)
			    {
			        cout<<fixed<<setprecision(5)<<"x1="<<x1<<';'<<"x2="<<x2;
			    }
			}
			if(b[i]*b[i]-4*a[i]*c[i]<0)
			{
				p=-b[i]/(2*a[i]);q=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
				if(p!=0)
			    cout<<fixed<<setprecision(5)<<"x1="<<p<<"+"<<q<<"i"<<";"<<"x2="<<p<<-q<<"i";
				if(p==0)
				cout<<fixed<<setprecision(5)<<"x1=0.00000"<<"+"<<q<<"i"<<";"<<"x2=0.00000"<<-q<<"i";

			}
		}
		return 0;
}



