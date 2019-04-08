//Define Head files
int a[501];//Array of Elements
int main()
{
	int n,x;
	double avr=0;
	cin>>n;
	for(x=1;x<=n;x++)
	{
		cin>>a[x];
		avr+=a[x];
	}
	avr=avr/n;
	//Input Fin
	sort(&a[1],&a[n]+1);
	
	
	/*for(x=1;x<=n;x++)  cout<<a[x]<<' ';
	cout<<endl<<avr;
	*/
	
	if ( avr-a[1]>a[n]-avr )
	{
		cout<<a[1]<<endl;
	}
	else if ( avr-a[1] ==a[n]-avr )
	{
		cout<<a[1]<<','<<a[n]<<endl;
	}
	else cout<<a[n]<<endl;
	

	return 0;
}
	 