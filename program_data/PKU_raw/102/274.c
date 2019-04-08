//******************************************
//*???????.cpp                     **
//*??: ??     1100012808              **
//*???2011.11.03                       **
//******************************************
int main()  //???
{        //?????
	float h[41] = {0.0},m[41] = {0.0},f[41] = {0.0}, t;
	char sex[41][10];
	int i = 0, j = 1, k = 1, n = 0, l = 0 ;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> sex[i] >> h[i];
		if (sex[i][0] == 'm')
		{
			m[j] = h[i];
			j++;
		}
		else 
		{
			f[k] = h[i];
			k++;
		}
	}
	for (l = 1; l < j - 1; l++)
		for (i = 1; i < j - l; i++)
			if (m[i] > m[i + 1])
			{
				t = m[i];
				m[i] = m[i + 1];
				m[i + 1] = t;
			}
	for (l = 1; l < k - 1; l++)
		for (i = 1; i < k - l; i++)
			if (f[i] < f[i + 1])
			{
				t = f[i];
				f[i] = f[i + 1];
				f[i + 1] = t;
			}
	cout << fixed << setprecision(2) << m[1];
	for (i = 2; i < j; i++)
		cout << fixed << setprecision(2) << " " << m[i] ;
	for (i = 1; i < k; i++)
		cout << fixed << setprecision(2) << " " << f[i] ;
	return 0;
}

	


	





