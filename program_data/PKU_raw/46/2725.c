int main()
{
	int row, col, num[100][100], count;
	int r, l;
	int i, j, k;
	cin >> row >> col;
	count = row * col;
	for (i = 1; i <= row; i++)   // i???
	{
		for (j = 1; j <= col; j++)  // j???
		{
			cin >> num[i][j];
		}
	} // end for
	int r1, r2, l1, l2;
	r1 = 1;
	r2 = row;
	l1 = 1; 
	l2 = col;
	while ((r1 <= r2) && (l1 <= l2))
	{
		int flag = 0;
		for (l = l1; l <= l2; l++)
		{
			cout << num[r1][l];
			count--;   // count?????????
			if (count != 0)
			{
				cout << endl;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag)
		{
			break;
		}
		for (r = r1 + 1; r <= r2; r++)
		{
			cout << num[r][l2];
			count--;
			if (count != 0)
			{
				cout << endl;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag)
		{
			break;
		}
		for (l = l2 - 1; l >= l1; l--)
		{
			cout << num[r2][l];
                                                                 			count--;
			if (count != 0)
			{
				cout << endl;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag)
		{
			break;
		}
		for (r = r2 - 1; r > r1; r--) 
		{
			cout << num[r][l1];
			count--;
			if (count != 0)
			{
				cout << endl;
			}
			else 
			{
				flag = 1;
			}
		}
		if (flag)
		{
			break;
		}
		else 
		{
			r1++;
			r2--;
			l1++;
			l2--;
		}
	}  // end while
	return 0;
}

