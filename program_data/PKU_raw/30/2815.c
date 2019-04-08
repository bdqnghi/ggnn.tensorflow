int main()
{
	int n,i=1,c;
	int sum=0;
	cin>>n;
	while(i<=n&&i<=10)
	{
        if((i%7)&&((i-7)%10))
			sum+=i*i;
		i=i+1;
	}
	while(i<=n)
	{
		c=i/10;
		if((i%7)&&((i-7)%10)&&(c%7))
			sum+=i*i;
		i=i+1;
	}
		cout<<sum<<endl;
	return 0;
}