

int main(){
	int n;
	int r, a, b, c, d, e, f;
	cin >> n;
	r = n;
	a = (r - r % 100) / 100;
	r = r % 100;
	b = (r - r % 50) / 50;
	r = r % 50;
	c = (r - r % 20) / 20;
	r = r % 20;
	d = (r - r % 10) / 10;
	r = r % 10;
	e = (r - r % 5) / 5;
	r = r % 5;
	f=r;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
return 0;
}
