int main()
{
	int n,left=0;
	cin>>n;
	cout<<n/100<<endl;
	left=n%100;
	cout<<left/50<<endl;
	left=left%50;
	cout<<left/20<<endl;
	left=left%20;
	cout<<left/10<<endl;
	left=left%10;
	cout<<left/5<<endl;
	left=left%5;
	cout<<left<<endl;



	
	return 0;
}