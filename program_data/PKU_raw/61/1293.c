void xun(int);
int main()
{
	int n, a, i;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a;
		xun(a);
	}
	return 0;
}
void xun(int a)
{
	int i, b = 1, c = 1, d;
	if(a == 1 || a == 2)
		cout << "1" << endl;
	else
	{
		a --;
		for(i = 1; i < a; i++)
		{
			d = b;
			b = b + c;
			c = d;
		}
		cout << b << endl;
	}
	return ;
}