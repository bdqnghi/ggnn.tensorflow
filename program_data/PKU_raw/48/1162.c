// * * * * * * * * * * * * * * *
// *???????????     *
// *??????  1300013011   *
// *???2013.12.5            *
// * * * * * * * * * * * * * * *
int s (int a[9][9], int i, int j)
{
	if ((i < 0) || (i >= 8) || (j < 0) || (j >= 8) || (a[i][j] == 0))
		return 0;
	else
		return a[i][j] / 2;
}
void chart (int n, int a[9][9])
{
	int i, j, k, h, w1, w2, l1, l2;
    if(n == 0)
	{
		for (i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
            {
				if (j == 0)
                    cout << a[i][j];
                else
                    cout << " " << a[i][j];
			}
			cout << endl;
		}
	}
    else
	{
		int b[9][9] = {0};
		for (k = 0; k < 9; k++)
            for(h = 0; h < 9; h++)
			{ 
				if (a[k][h] != 0)
					a[h][k] *= 2;
			}
		
		for (k = 0; k < 9; k++)
            for(h = 0; h < 9; h++)
				b[k][h] = s(a, k - 1, h - 1) + s(a, k, h - 1)
    		   		        + s(a, k - 1, h) + s(a, k - 1, h + 1)
           				  + s(a, k + 1, h) + s(a, k, h + 1)
						  + s(a, k + 1, h - 1) + s(a, k + 1, h + 1);
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
				a[i][j] += b[i][j];
		chart (n - 1, a);
	}
}
int main()
{
    int  m, n, a[9][9] = {0};
    cin >> m >> n;
    a[4][4] = m;
    chart (n, a);
    return 0;
}