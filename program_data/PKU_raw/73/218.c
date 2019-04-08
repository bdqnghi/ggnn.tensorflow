//*******************
// 7.1.cpp 
// ??  1200018415
// 2012  11  5
//*******************


int main()
{
	int i, j, a[5][5];
	int k,c, n = 0, p = 0, m = 0;
	int j1,i1;
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= 4; j++)
			cin >> a[i][j];
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (m < a[i][j])
			{
				m = a[i][j];
				j1 = j;
			}
		}
		for (k = 0; k <= 4; k++)
		{
			if (a[k][j1] < m)
			{
				p = 1;
				break;
			}
		}
		if ( p == 0)
		{
			cout << i + 1 << " " << j1 + 1 << " " << m << endl;
			n = 1;
		}
		m = 0;
		p = 0;
	}
	if (n == 0)
		cout << "not found" << endl;

	return 0;
}


		


