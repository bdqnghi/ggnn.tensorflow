int main()
{
	int n,i;
	double a[100],b[100],c[100],x1,x2,y1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		if((b[i]*b[i]-4*a[i]*c[i])>0)
		{
			x1=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			x2=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			cout<<"x1="<<fixed<<setprecision(5)<<x1<<";"<<"x2="<<x2<<endl;
		}
		else if((b[i]*b[i]-4*a[i]*c[i])==0)
		{
			x1=(-b[i]+0)/(2*a[i]);
			x2=x1;
			cout<<"x1=x2="<<fixed<<setprecision(5)<<x1<<endl;
		}
		else if((b[i]*b[i]-4*a[i]*c[i])<0)
		{
			if(b[i]==0)y1=0;
			else
			{
				y1=(-b[i])/(2*a[i]);
			}
			x1=(sqrt(abs(b[i]*b[i]-4*a[i]*c[i])))/(2*a[i]);
			cout<<"x1="<<fixed<<setprecision(5)<<y1<<"+"<<x1<<"i"<<";"<<"x2="<<y1<<"-"<<x1<<"i"<<endl;
		}
	}
	return 0;
}