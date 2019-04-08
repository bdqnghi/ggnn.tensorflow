//****************************************
//*??? 
//*????? 1100012996       *
//*???2011.10.26**
//****************************************

int main()
{
	int row, col, i, j, l, k;
	cin >> row >> col;
	int a[100][100];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	l = 0;
	k = 1;
	if (row == 1 && col == 1)
	{
		cout << a[0][0];
	}
	else
	{
		for (j = 0; j < row * col; )
		{
			switch(k)
			{
			case 1:
				for (i = l; i < col - l; i++)
				{
					cout << a[l][i] << endl;
					j++;
				}
				k++;
				break;
			case 2:
				for (i = l + 1; i < row - 1 - l; i++)
				{
					cout << a[i][col - 1 - l] << endl;
					j++;
				}
				k++;
				break;
			case 3:
				for (i = col - l - 1; i >= l; i--)
				{
					cout << a[row - l - 1][i] << endl;
					j++;
				}
				k++;
				break;
			case 4:
				for (i = row - l - 2; i > l; i--)
				{
					cout << a[i][l] << endl;
					j++;
				}
				k++;
				break;
			default:
				k = 1;
				l++;
				break;
			}
		}
	}
	return 0;
}
