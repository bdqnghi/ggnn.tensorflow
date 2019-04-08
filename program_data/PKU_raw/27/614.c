int main()
{
	int j=1,n,i;
	float a,b,c;
	double x1,x2,t,p,q;
	cin>>n;
	while(j<=n)
	{
		cin>>a>>b>>c;
		t=b*b-4*a*c;
		if(t>0)
		{
			x1=(0-b+sqrt(t))/(2*a);
			x2=(0-b-sqrt(t))/(2*a);
			//cout<<"x1="<<printf("%.5f", x1)<<";"<<"x2="<<printf("%.5f", x2)<<endl;
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if(t==0)
		{
			x1=(0-b)/(2*a);
			//cout<<"x1=x2="<<printf("%.5f", x1)<<endl;
			printf("x1=x2=%.5lf\n", x1);
		}
		if(t<0)
		{
			p=(0-b)/(2*a);
			q=sqrt(-1*t)/(2*a);
			//cout<<"x1="<<printf("%.5f", x1)<<";"<<"x2="<<printf("%.5f", x2)<<endl;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
		}
		j++;
	}
	return 0;
}