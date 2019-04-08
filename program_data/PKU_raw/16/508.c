
int main()
{
	int i = 1,a,b,c,d,e;
	char ch;
	a=b=c=d=e=-1;
	while((ch = cin.get()) != '\n')
	{
		switch(i)
		{
		case 1: a = ch - '0';break;
		case 2: b = ch - '0';break;
		case 3: c = ch - '0';break;
		case 4: d = ch - '0';break;
		case 5: e = ch - '0';break;
		}
		i++;
	}
		if(e == -1 && d != -1)
		cout << d << c << b << a << endl;
		else
		if(e == -1 && d == -1 && c != -1)
		cout << c << b << a << endl;
		else
		if(e == -1 && d == -1 && c == -1&& b != -1)
		cout << b << a << endl;
		else
		if(e == -1 && d == -1 && c == -1&& b == -1&& a!= -1)
		cout << a << endl;
		else
		cout << e << d << c << b << a << endl;

	return 0;
}
