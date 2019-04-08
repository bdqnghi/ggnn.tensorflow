
int main()
{
	int n,x,a,b,c,d,i;
	double e,f,g,h;
	a=0;
	b=0;
	c=0;
	d=0;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>x;
		if (x>=1&&x<=18)
		{
			a=a+1;
		}
		if (x>=19&&x<=35)
		{
			b=b+1;
		}
		if (x>=36&&x<=60)
		{
			c=c+1;
		}
		if (x>=61)
		{
			d=d+1;
		}
	}
	e=(float)a/(float)n*100;
	f=(float)b/(float)n*100;
	g=(float)c/(float)n*100;
	h=(float)d/(float)n*100;
	cout<<"1-18: "<<fixed<<setprecision(2)<<e<<"%"<<endl;
	cout<<"19-35: "<<fixed<<setprecision(2)<<f<<"%"<<endl;
	cout<<"36-60: "<<fixed<<setprecision(2)<<g<<"%"<<endl;
	cout<<"60??: "<<fixed<<setprecision(2)<<h<<"%"<<endl;
	return 0;
}