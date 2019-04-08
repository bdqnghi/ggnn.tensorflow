/**
* @file 1000012853_1
* @author 1000012853 ??
* @date 2010?11?05
* @desc ????
*/
int main()
{
	int i, j, row, column, m;
	int a[5][5], b[5] = {0};
	for (i = 0; i < 5; i ++)
	{
		for (j= 0; j < 5; j ++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < 5; i ++)
	{
		m = a[i][0];
		row = i;
		column = 0;
		for (j = 0; j < 5; j ++)
		{   int flag = 0;
			if (a[i][j] > m)
			{
				m = a[i][j];
				row = i;
				column = j;
			}
			if (j == 4)
			{
			for (int k = 0; k < 5; k ++)
			{
				if (k != row && m > a[k][column])
				{   flag = 1;
				    break;
				}
			}
				if ( flag == 0)
				{
				   cout << row + 1 <<' '<< column + 1 <<' '<< a[row][column] << endl;
				   b[i] = 1;
				}
			}
		}
	}
	if ((b[0] + b[1] + b[2] + b[3] + b[4]) == 0)
	{
	    cout << "not found" << endl;
	}
	return 0;
}