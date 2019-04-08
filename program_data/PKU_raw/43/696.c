int main()
{
	int m;
	cin>>m;
	int a=3;
	for(;a<=m/2;a=a+2)
	{
		double s=sqrt(a);
		int i=2;
		for (;i<=(int)s+1;i++)
		{
			int b;
			b=a%i;
			if(b==0) break;
		}
		if(i<=(int)s+1) continue;
		else {
			int c;
			c=m-a;
			double t=sqrt((double)c);
		int h=2;
		for (;h<=(int)t+1;h++)
		{
			int d;
			d=c%h;
			if(d==0) break;
		}
		if(h<=(int)t+1) continue;
		else
		{cout<<a<<' '<<c<<endl;}
		}
	}
	
	return 0;
}
