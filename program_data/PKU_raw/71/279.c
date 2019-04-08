/*
 * file    competition 1_4
 * author  ??
 * date    2010-10-22
 * description
           ?????
*/



int main()
{
	int n, i, y, m1, m2, t, j, m;
	int a[12];
	a[1] = 31;
	a[3] = 31;
	a[4] = 30;
	a[5] = 31;
	a[6] = 30;
	a[7] = 31;
	a[8] = 31;
	a[9] = 30;
	a[10] = 31;
	a[11] = 30;
	a[12] = 31;
	cin >> n;
	for (i = 1; i <= n; i ++)
	{
		cin >> y >> m1 >> m2;
     	if ( y % 4 != 0) t = 0;
     	else 
	      	if ( y % 100 == 0 && y % 400 != 0 ) t = 0;
	        else t = 1;
		if (t == 0) a[2] = 28;
		else a[2] = 29;
		if (m1 > m2) 
		{
			m = m1;
			m1 = m2;
			m2 = m;
		}
		m = 0;
		for (j = m1; j < m2; j ++)
			m = m + a[j];
		if (m % 7 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}
	return 0;
}