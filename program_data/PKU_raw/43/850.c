//***********************************************
//         1.cpp
//   ??????
//  created on 2012-10-22
//  author ?? 1200012934
//***********************************************
int main()
{
	int m, i, j, l;
	cin >> m;
	for (i = 3; i <= m /2; i++)
	{
		l = (int) sqrt (i);
		for (j = 2; j <= l; j++)
			if (i % j == 0) break;
		if (j == l + 1)
		{
			l = (int) sqrt (m - i);
			for (j = 2; j <= l; j++)
				if ((m - i) % j == 0) break;
			if (j == l +1)
				cout << i << " " << m - i << endl;
		}
	}
	return 0;
}