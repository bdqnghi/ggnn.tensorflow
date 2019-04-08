int Prime( int n)
{
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n,a=0;
	cin>>n;
	for(int i=2;i+2<=n;i++)
	{
		if( Prime(i)&&Prime(i+2) )
		{
			cout<<i<<' '<<i+2<<endl;
			a=1;
		}
	}
	if(a==0)
		cout<<"empty";


return 0;
}