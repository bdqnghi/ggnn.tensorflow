int main()
{
	int n,a,b,c,d,e,f;
	cin>>n;
	cout<<n/100<<endl;n=n%100;
	cout<<n/50<<endl;n=n%50;
	cout<<n/20<<endl;n=n%20;
	cout<<n/10<<endl;n=n%10;
	cout<<n/5<<endl;n=n%5;
	cout<<n<<endl;
	return 0;
}