//*****************************************
//* ?????(11.8) ???????? **
//* ?????? 1300012741 **
//* ???2013.10.16 **
//*****************************************


void	bacteria( int, int[9][9] );

int main()
{
	int numBacteria, numDay;
	int container[9][9] = { 0 };
	int i, j;

	cin >> numBacteria >> numDay;
	container[4][4] = numBacteria;

	bacteria( numDay, container );

	for ( i = 0; i < 9; i++ )
	{
		for ( j = 0; j < 9; j++ )
		{
			cout << container[i][j];
			if ( j != 8 )
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}

void bacteria( int numDay, int container[9][9] )
{
	int i, j;
	int tempContainer[9][9] = { 0 };

	if ( !numDay )
		return;
	else
		bacteria( numDay - 1, container );

	for ( i = 0; i < 9; i++ )
		for ( j = 0; j < 9; j++ )
			if ( container[i][j] )
			{
				tempContainer[i - 1][j] += container[i][j];
				tempContainer[i + 1][j] += container[i][j];
				tempContainer[i][j - 1] += container[i][j];
				tempContainer[i][j + 1] += container[i][j];
				tempContainer[i - 1][j - 1] += container[i][j];
				tempContainer[i - 1][j + 1] += container[i][j];
				tempContainer[i + 1][j - 1] += container[i][j];
				tempContainer[i + 1][j + 1] += container[i][j];
				tempContainer[i][j] += 2 * container[i][j];
			}
	for ( i = 0; i < 9; i++ )
		for ( j = 0; j < 9; j++ )
			if ( tempContainer[i][j] )
				container[i][j] = tempContainer[i][j];

	return;
}