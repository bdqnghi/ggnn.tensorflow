/*
 * ????jizhenbianyuanqiuhe.cpp
 * ???? ?
 *  Created on: 2012-12-19
 * ?????????????????????????
*/



int main()
{
	int k = 0, i = 0, j = 0, lin = 0, col = 0;
	int array[105][105];
	int sum = 0;
	cin >> k;
	for (i = 1; i <= k; i++)
	{
		sum = 0;
		cin >> lin >> col;
		for(int p = 0; p < lin; p++)
		{
			for (int q = 0; q < col; q++)
			{
				cin >> *(*(array+p) + q);
			}
		}
		for(j = 0; j < col; j++)
		{
			sum = sum + array[0][j];
		}
		for (j = 1; j < lin; j++)
		{
			sum = sum + array[j][col-1];
		}
		for (j = 0; j < (col-1); j++)
		{
			sum = sum + array[lin-1][j];
		}
		for (j = 1; j < (lin-1); j++)
		{
			sum = sum + array[j][0];
		}
		cout << sum << endl;
	}
	return 0;
}
