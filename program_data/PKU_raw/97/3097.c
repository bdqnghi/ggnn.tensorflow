int main()
{
	int n;
	cin >> n;
	int a,b,c,d,e;
    a=n/100;
	n=n%100;
	b=n/50;
	n=n%50;
	c=n/20;
	n=n%20;
	d=n/10;
	n=n%10;
	e=n/5;
	n=n%5;
    cout << a <<endl;
	cout << b <<endl;
	cout << c <<endl;
	cout << d <<endl;
	cout << e <<endl;
	cout << n <<endl;
	return 0;
}