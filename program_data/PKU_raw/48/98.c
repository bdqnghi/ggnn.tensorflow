
void fz( int , int[11][11]);

int main()
{
	int f ,d ;
	int pym[11][11]={0};
	cin >> f >> d;
	pym[5][5] = f;
	fz( d , pym );
	for( int i = 1 ; i <= 9 ; i++)
	{
		for( int j = 1 ; j <= 9 ; j ++)
		{
			if( j < 9)
			{
			cout<<pym[i][j]<<" ";
			}
			else
			{
				cout<<pym[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}


void fz( int day , int pym[11][11])
{
	if( day == 0)
	{
		return ;
	}
	else
	{
	int temp[11][11] = {0};
	for( int a = 1 ; a <=10 ; a++)
	{
		for( int b = 1 ; b <= 10 ; b ++)
		{
			if( pym[a][b] > 0)
			{
				temp[a][b] += 2 * pym[a][b];
				temp[a - 1][b] +=  pym[a][b];
				temp[a + 1][b] +=  pym[a][b];
				temp[a ][b - 1] +=  pym[a][b];
				temp[a ][b + 1] += pym[a][b];
				temp[a + 1][b + 1] += pym[a][b];
				temp[a + 1 ][b - 1] += pym[a][b];
				temp[a - 1 ][b + 1] += pym[a][b];
				temp[a - 1][b - 1] += pym[a][b];
		
			}
			else
			{
				continue;
			}

		}
	}
	for( int c = 1 ; c <=10 ; c++)
	{
		for( int d = 1 ; d <= 10 ; d ++)
		{
			pym[c][d] = temp[c][d];
		}
	}
	fz( day - 1, pym);
	}
}

	