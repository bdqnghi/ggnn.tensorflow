void jiao(int m);
int main()
{
	int m;
	cin >> m;
	jiao(m);
	return 0;
}
void jiao(int m)
{
	while( m != 1)
	{
		if(m % 2 == 0)
		{
			cout << m << "/2=";
			m = m / 2;
			cout << m << endl;
		}
		else
		{
			cout << m << "*3+1=";
			m = m * 3 + 1;
			cout << m << endl;
		}
	}
	if(m == 1)
		cout << "End" << endl;
}