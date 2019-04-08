int main()
{
	int n;
	cin>>n;
	if(n<10)
		cout<<n;
	else if(10<=n && n<100)
	{
		cout<<n%10<<n/10;
	}
	else if(n>=100 && n<=999)
	{
		cout<<n-(n/10)*10<<n/10-(n/100)*10<<n/100;
	}
	else if(n>=1000 && n<=9999)
	{
		cout<<n-(n/10)*10<<n/10-(n/100)*10<<n/100-(n/1000)*10<<n/1000;
	}
	else if (n==10000)
	{
		cout<<00001;
	}
	return 0;
}
