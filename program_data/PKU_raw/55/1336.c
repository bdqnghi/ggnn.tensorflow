//*****************************
//*??? :????           *
//*??   :???             *
//*??   :2011?11?         *
//*****************************
void zhuan(int, char [], int); 
int main ()
{
	int a, b;
	char n[101];
	cin >> a >> n >> b;
	zhuan(a, n, b);
	return 0;
}
void zhuan(int a, char n[], int b)
{
	int i, m[101], s, t;
	for (i = 0; ; i++)
	{
		if (n[i] =='\0') break;
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			m[i] = n[i] - 'a' + 10;
			continue;
		}
		if (n[i] >= 'A' && n[i] <= 'Z')
			m[i] = n[i] - 'A' + 10;
		else m[i] = n[i] - '0';
	}
	t = i;
	s = m[0];
	if (s == 0) cout << 0;
	for (i = 0; i < t - 1; i++)
		s = s * a + m[i + 1];
	for (i = 0; ; i++)
	{
		if (s == 0) break;
		m[i] = s % b;
		s = s / b;
	}
	t = i - 1;
	for (i = t; i >= 0; i--)
	{
		if (m[i] < 10)
			cout << m[i];
		else cout << (char) (m[i] - 10 + 'A');
	}



}
