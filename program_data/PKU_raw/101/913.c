int main()
{
	int a, b, c, o, p, q;			//??????
	a=3; b=2; c=1;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o<p)&&(p<q))
	{
		cout << "ABC" << endl;
		return 0;
	}
	a=3; c=2; b=1;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o<p)&&(p<q))
	{
		cout << "ACB" << endl;
		return 0;
	}
	a=3; b=2; c=2;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o<p)&&(p==q))
	{
		cout << "ABC" << endl;
		return 0;
	}
	a=3; b=3; c=1;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o==p)&&(p<q))
	{
		cout << "ABC" << endl;
		return 0;
	}
	a=3; b=2; c=3;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o==q)&&(p>q))
	{
		cout << "ACB" << endl;
		return 0;
	}
	a=3; b=3; c=3;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o==p)&&(p==q))
	{
		cout << "ABC" << endl;
		return 0;
	}
	a=2; b=3; c=1;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o>p)&&(o<q))
	{
		cout << "BAC" << endl;
		return 0;
	}
	a=1; b=3; c=2;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o>=q)&&(p<=q))
	{
		cout << "BCA" << endl;
		return 0;
	}
	a=1; b=2; c=1;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o==q)&&(p<q))
	{
		cout << "BAC" << endl;
		return 0;
	}
	a=1; b=2; c=2;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o>p)&&(p==q))
	{
		cout << "BCA" << endl;
		return 0;
	}
	a=2; b=1; c=3;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o<p)&&(o>q))
	{
		cout << "CAB" << endl;
		return 0;
	}
	a=1; b=2; c=3;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o>p)&&(p>q))
	{
		cout << "CBA" << endl;
		return 0;
	}
	a=2; b=2; c=3;
	o=(b>a)+(a==c);
	p=(a>b)+(a>c);
	q=(c>b)+(b>a);
	if ((o==p)&&(p>q))
	{
		cout << "CAB" << endl;
		return 0;
	}
}