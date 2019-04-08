int main()
{
	int n,p;
	cin>>n;
	p=0;
	cout<<(n%10);
	while(n>9)
	{
		p=(n-(n%10))/10;
		n=p;
		cout<<(n%10);
	}
}
