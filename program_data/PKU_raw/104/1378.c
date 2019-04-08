int main()
{
	int a,b;
	cin>>a>>b;
	void cha_pri(int,int);
	if(a!=b)
		cha_pri(a,b);
	else cout<<a<<endl;
	
	return 0;
}

void cha_pri(int m,int n)
{
	void cha_pri(int,int);
	if(m>n)
	{
		m/=2;
		if(m==n)
			cout<<m;
		else cha_pri(m,n);
	}
	else if(m<n)
	{
		n/=2;
		if(m==n)
			cout<<m;
		else cha_pri(m,n);
	}
	else return;
}