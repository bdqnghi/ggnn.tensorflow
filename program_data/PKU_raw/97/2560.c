int main()
{
	int n,a1,a2,a3,a4,a5,a6;
	cin>>n;
	a1=n/100;
	n=n%100;
	a2=n/50;
	n=n%50;
	a3=n/20;
	n=n%20;
	a4=n/10;
	n=n%10;
	a5=n/5;
	n=n%5;
	a6=n;
	cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl;
	return 0;
}