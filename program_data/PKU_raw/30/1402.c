int main()
{
	int n,i,a,b,c;
	a=0;
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		b = i / 10;
		c = i - (10 * b);
		if(i%7==0||b==7||c==7)
			continue;
		a = a + (i*i);
	}
	cout << a << endl;
	cin.get();
	cin.get();
	return 0;
}
