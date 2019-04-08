//**********************************************************
//*  ?????2.cpp                                       *
//*  ??????1200012906                                *
//*  ???2012?11?19?                                  *
//*  ???????????                                *
//**********************************************************

int sum, n;     //???????a[1][1]??
void r2z(int a[][100], int n);  //?????????
void sub(int a[][100], int n);   //?????????

int main()
{
	int i, row, col, a[100][100] = {0};
	cin >> n;
	int m = n;  //?m???n???
	for (i = 0; i < m; i++)
	{
		sum = 0;
		n = m;   //?????????n???
		for (row = 0; row < m; row++)
			for (col = 0; col < m; col++)
			{
				cin >> a[row][col];  //??????
			}
		r2z(a, n);   //??????sum??
		cout << sum << endl; 
	}
	return 0;
}

void r2z(int a[][100], int n)
{
	int i, j, min[100];
	for(i = 0; i < n; i++)
	{
		min[i] = 10000;    //?????????
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < min[i])
				min[i] = a[i][j];    //???????
		}
		for (j = 0; j < n; j++)
		{
			a[i][j] -= min[i];   //???????????
		}
	}
	for (j = 0; j < n; j++)
	{
		min[j] = 10000;
		for (i = 0; i < n; i++)
		{
			if (a[i][j] < min[j])
				min[j] = a[i][j];  //???????
		}
		for (i = 0; i < n; i++)
		{
			a[i][j] -= min[j];    //???????????
		}
	}
	sum += a[1][1];  //??a[1][1]??
	sub(a, n);      //???????
}

void sub(int a[][100], int n)
{
	int i, j;
	for(i = 1; i < n - 1; i++)
	{
		a[0][i] = a[0][i + 1];
		a[i][0] = a[i + 1][0];
		for (j = 1; j < n - 1; j++)
			a[i][j] = a[i + 1][j + 1];
	}
	n--;   //?????1
	if (n > 1)
		r2z(a, n);   //???1*1???
}