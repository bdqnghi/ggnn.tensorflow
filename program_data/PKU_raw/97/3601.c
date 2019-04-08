int main()
{
	int n, m100, m50, m20, m10, m5;
	cin >> n;
	m100 = n % 100;
	cout << (n - m100) / 100 << endl;
	m50 = m100 % 50;
	cout << (m100 - m50) / 50 << endl;
	m20 = m50 % 20;
	cout << (m50 - m20) / 20 << endl;
	m10 = m20 % 10;
	cout << (m20 - m10) / 10 << endl;
	m5 = m10 % 5;
	cout << (m10 - m5) / 5 << endl;
	cout << m5 << endl;
	return 0;
}

