int main()
{
	int n;
	cin>>n;
	cout<<(int)(n/100)<<endl;;
    if(n>=100)
		n=n-100*((int)(n/100));

	cout<<(int)(n/50)<<endl;
	if(n>=50)
		n=n-50;

	cout<<(int)(n/20)<<endl;
	if(n>=20)
		n=n-((int)(n/20))*20;

	cout<<(int)(n/10)<<endl;
	if(n>=10)
		n-=10;

	cout<<(int)(n/5)<<endl;
	if(n>=5)
		n-=5;

	cout<<n<<endl;

		
	return 0;
}