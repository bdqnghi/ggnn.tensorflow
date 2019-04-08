int main()
{
	int num,a,b,r;
	cin >> num;
	for(a=3;a<=num/2;a+=2){
		for(r=2;r<a;r++) if(!(a%r)) r=a;
		if(r==a){
			b=num-a;
			for(r=2;r<b;r++) if(!(b%r)) r=b;
		}
		if(r==b) cout << a << ' ' << b << '\n';
	}
	return 0;
}