//********************************
//*???1   **
//*?????? 1200012867 **
//*???2012.  **
//********************************

int main()
{
	int a[100][100];
	int aa[10000];
	int r,c,i,i1,j,k,r1,c1;
	cin >> r >> c;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j< c; j++)
			cin >> a[i][j];
	}
	r1 = 0;
	c1 = 0;
	k = 0;
	i1 = 0;
	while (1)
	{
		if (c1 < c - 1)
		{
			i = 0;
			for (j = c1; j >= 0; j--)
			{
				aa[k] = a[i][j];
				k++;
				if (i < (r-1))
					i++;
				else
					break;
			}
			c1++;
		}
		else
		{
			i = i1;
			for (j = c1; j >= 0; j--)
			{
				aa[k] = a[i][j];
				k++;
				if (i < (r-1))
					i++;
				else
					break;
			}
			i1++;
		}
		if ((i == (r - 1)) && (j == (c - 1)))
			break;
	}
	for (i = 0; i < k; i++)
	{
		cout << aa[i] << endl;
	}
	cin.get();
    cin.get(); //????
	return 0;
}