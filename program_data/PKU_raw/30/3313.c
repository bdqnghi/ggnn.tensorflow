int main()
{
	int n,i,a,b;
	long int sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	a=i/10;
	b=i%10;
	if(a!=7&&i%7!=0&&b!=7)
		sum=sum+i*i;
	}
	cout<<sum;
	return 0;
}

