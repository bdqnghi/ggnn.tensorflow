int main()
{
	int n,s;
	cin>>n;
	s=n*(n+1)*(2*n+1)/6;
	for(int i=1;i<=n;i++)
	{
		double a,b;
		a=i%10;
		b=i%7;
		if(a==7) s=s-i*i;
		else if(i>=70&&i<80) s=s-i*i;
		else if(b==0) s=s-i*i;
		
	}
	cout<<s;
	return 0;
}
