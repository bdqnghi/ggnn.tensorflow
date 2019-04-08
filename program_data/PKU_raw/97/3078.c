
int main()
{
	int n;
	cin>>n;
	cout<<n/100<<endl;
	n%=100;
	cout<<n/50<<endl;
	n-=(n/50)*50;
	cout<<n/20<<endl;
	n-=(n/20)*20;
	cout<<n/10<<endl;
	n%=10;
	cout<<n/5<<endl;
	n-=(n/5)*5;
	cout<<n<<endl;
	return 0;
}