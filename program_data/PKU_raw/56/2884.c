int main()
{
	int n,a[6],i,b[6];
	cin>>n;
	for(i=1;i<=5;i++)
	{
		b[i]=(int)n/pow(10*1.0,(5-i)*1.0);
		a[i]=b[i]%10;

	}
	for(i=1;i<=5;i++)
	{
		if(a[6-i]!=0)
		cout<<a[6-i];
	}
	cout<<endl;
	return 0;
}
	