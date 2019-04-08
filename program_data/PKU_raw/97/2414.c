int main()
{
	int n,h,l;
	cin>>n;
	h=n/100;
	l=n%100;
	cout<<h<<endl;
	h=l/50;
	l=l%50;
	cout<<h<<endl;
    h=l/20;
	l=l%20;
	cout<<h<<endl;
	h=l/10;
	l=l%10;
	cout<<h<<endl;
	h=l/5;
	l=l%5;
	cout<<h<<endl;
	h=l/1;
	l=l%1;
	cout<<h<<endl;
    return 0;
}