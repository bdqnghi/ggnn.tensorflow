//********************
//**????********** 
//**???1300012728**
//**2013.11.1*********
//********************
int main()
{
	int x1, y1, x2, y2;                            // ?? x1, y1, x2, y2????????????
	cin >> x1 >> y1;                               // ???????? 
	
	int a[x1][y1];                                 // ???????????a
	for (int i = 0; i < x1; i++)                   // ????a 
	{
		for (int j = 0; j < y1; j++)
			cin >> a[i][j];
	}
	cin >> x2 >> y2;
	int b[x2][y2], c[x1][y2];                      // ??????????b?????c 
	for (int i = 0; i < x2; i++)                   // ????b 
	{
		for (int j = 0; j < y2; j++)
			cin >> b[i][j];
	}
	for (int i = 0; i < x1; i++)                   // ????b 
	{
		for (int j = 0; j < y2; j++)
		{
			c[i][j] = 0;                           // ???c????? 
			for (int k = 0; k < y1; k++)           // ????c?i??j? 
				c[i][j] += a[i][k] * b[k][j];
			if (j == 0)
			cout << c[i][j];
			else
			cout << ' ' << c[i][j];                       // ?????? 
		}
		cout << endl;
	}
	return 0;
}