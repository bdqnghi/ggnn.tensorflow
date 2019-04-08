int		arr[100][100] = {0};
int		pos[120][120] = {0};
int		rr, cc;

void	bianli(int, int, int, int);

int main()
{
	int	i, j;
	cin >> rr;
	cin >> cc;

	for(i = 0; i < rr; i ++)
	{
		for (j = 0; j < cc; j ++)
		{
			cin >> arr[i][j];
			pos[i][j] = 1;
		}
	}

	bianli(0, 0, 0, 1);
return 0;
}

//0 ??? 1 ??? 
void	bianli(int k, int ii, int jj, int s)
{
	if(pos[ii][jj] == 0)
	{
		return;
	}


	int i, j;
	//??
	if(k == 0)
	{
		//?? 
		if(s == 0)
		{
			for (j = jj; j >= 0; j --)
			{
				if(pos[ii][j] == 1)
				{
					cout << arr[ii][j] << endl;
					pos[ii][j] = 0;
				}
				else
				{
					bianli(1, ii - 1, j + 1, 0);
					return;
				}
			}
			bianli(1, ii - 1, 0, 0);
			return;
		}
		//?? 
		else
		{
			for (j = jj; j < cc; j ++)
			{
				if(pos[ii][j] == 1)
				{
					cout << arr[ii][j] << endl;
					pos[ii][j] = 0;
				}
				else
				{
					bianli(1, ii + 1, j - 1, 1);
					return;
				}
			}
			bianli(1, ii + 1, cc - 1, 1);
			return;
		}
	}		
	//??
	else
	{
		//?? 
		if(s == 0)
		{
			for (i = ii; i >= 0; i --)
			{
				if(pos[i][jj] == 1)
				{
					cout << arr[i][jj] << endl;
					pos[i][jj] = 0;
				}
				else
				{
					bianli(0, i + 1, jj + 1, 1);
					return;
				}
			}
			bianli(0, 0, jj + 1, 1);
			return;
		}
		
		//?? 
		else
		{
			for (i = ii; i < rr; i ++)
			{
				if(pos[i][jj] == 1)
				{
					cout << arr[i][jj] << endl;
					pos[i][jj] = 0;
				}
				else
				{
					bianli(0, i - 1, jj - 1, 0);
					return;
				}
			}
			bianli(0, rr - 1, jj - 1, 0);
			return;
		}
	}

return;
}