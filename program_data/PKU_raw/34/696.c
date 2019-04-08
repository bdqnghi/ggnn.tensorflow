//*************************************************
//?????????
//??????
//?????2010.12.01
//????????????????1???
//*************************************************
int main ()
{
	void JiaoGu ( int a);
	int a;
	cin >> a;
	JiaoGu (a);
	return 0;
}

void JiaoGu ( int a)
{
	int b;
	if (a == 1)
		cout << "End" << endl;
	else if (a % 2 == 0)
	{
		b= a / 2;
		cout << a << "/2=" << b << endl;
		JiaoGu(b);
	}
	else 
	{
		b = a * 3 + 1;
		cout << a << "*3+1=" <<b<< endl;
		JiaoGu(b);
	}
}