int main()
{
	int n , malecount = 0 , femalecount = 0;
	cin >> n;
	float t;
	char a[41][6];
	float b[41] , m[41] , f[41];
	int i , j;
	for (i = 1 ; i <= n ; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i][0] == 'm')
		{
		   	malecount++;
			m[malecount] = b[i];
		}
		else 
		{
			femalecount++;
			f[femalecount] = b[i];
		}
	}
	for (i = 1 ; i <= malecount - 1 ; i++)
	{
		for (j = 1 ; j <=  malecount - i ; j++)
		{
			if (m[j] > m[j + 1])
		    {
				t = m[j];
				m[j] = m[j + 1];
			    m[j + 1] = t;
		    }
		}
	}
	for (i = 1 ; i <= femalecount - 1 ; i++)
	{
		for (j = 1 ; j <= femalecount - i ; j++)
		{
			if (f[j] < f[j + 1])
			{
				t = f[j];
				f[j] = f[j + 1];
			    f[j + 1] = t;
			}
		}
	}
	cout << fixed;
	cout << setprecision(2) << m[1];
	for (i = 2 ; i <= malecount ; i++)
	{
		cout << " " << setprecision(2) << m[i];
	}
	for (i = 1 ; i <= femalecount ; i++)
	{
		cout <<  " " << setprecision(2) << f[i];
	}
	return 0;
}