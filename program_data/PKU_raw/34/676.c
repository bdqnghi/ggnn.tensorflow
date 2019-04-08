void process(int m)
{
	int m_change;
	if (m == 1)
	{
		cout << "End" << endl;
		return;
	}
	else
		if (m % 2 == 1)
		{
			m_change = m * 3 + 1;
			cout << m << "*" << 3 << "+" << 1 << "=" << m_change << endl;
			process(m_change);
		}
		else
		{
			m_change = m / 2;
			cout << m << "/" << 2 << "=" << m_change << endl;
			process(m_change);
		}
}
int main()
{
	int n;
	cin >> n;
	process(n);

	return 0;
}