int main()
{
	int n,a,m,s,b,c,d;
	cin>>n;
	a=1;
	s=0;
	while (a<=n)
	{
		m=a-7;
	    b=a%7;
	    c=m%10;
		d=a-70;
		if(d<0||d>=10)
			if(b!=0&&c!=0)
				s=s+a*a;
		a=a+1;
	}
	cout<<s<<endl;
	return 0;
}
