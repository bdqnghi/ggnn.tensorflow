int main()
{
	int n,k;
	float a,b,c;
	double x1,x2,t,i;
	cin>>n;
	for(k=0;k<n;k=k+1)//circulating
	{
	   	cin>>a>>b>>c;
	   	t=b*b-4*a*c;

	   	if(t==0)
	   	 {
	   		x1=(-b + sqrt(t))/(2*a);
	   	    x2=(-b - sqrt(t))/(2*a);
	   	    cout<<fixed<<setprecision(5)<<"x1"<<"="<<"x2"<<"="<<fixed<<setprecision(5)<<x1<<endl;
	   	 }
	   	if(t>0)
	   	{
	   		x1=(-b + sqrt(t))/(2*a);
	   		x2=(-b - sqrt(t))/(2*a);
	   		cout<<"x1"<<"="<<fixed<<setprecision(5)<<x1<<";"<<"x2"<<"="<<fixed<<setprecision(5)<<x2<<endl;
	   	}
	   	if(t<0)
	   	{
	   		x1=(-b)/(2*a);
	   		x2=(-b)/(2*a);
	   		i=sqrt(-t)/(2*a);
	   		if (x1>=-0.000001 && x1<=0.0000001) x1=x2=0.00;//if x is a number which approximately approach 0(set the range of its presicion!), we can output 0 instead of x.
	   		cout<<"x1"<<"="<<fixed<<setprecision(5)<<x1<<"+"<<i<<"i"<<";"<<"x2"<<"="<<fixed<<setprecision(5)<<x2<<"-"<<i<<"i"<<endl;
	   	}

	}
     return 0;
}