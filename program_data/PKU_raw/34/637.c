/*            ????
??????        2010.12.06        */

void f(int a)
{
	if(a == 1)
		cout << "End" << endl;//a?1??????
	else
		if(a % 2)
		{
			cout << a << "*3+1=" << 3 * a + 1 << endl;
			f(3 * a + 1);//????3?1
		}
		else
		{
			cout << a << "/2=" << a / 2 << endl;
			f(a / 2);//?????2
		}
}

int main()
{
	int n;
	cin >> n;
	f(n);//???????
	return 0;
}