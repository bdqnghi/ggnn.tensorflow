//*****************************************
//* ???????? **
//* ?????? 1300012741 **
//* ???2013.10.16 **
//*****************************************


int	share( int, int, int, int );

int main()
{
	int numMonkey, numThrowed, numRest = 1;
	int numApples;

	cin >> numMonkey >> numThrowed;

	while ( !( numApples = share( numMonkey, numMonkey, numThrowed, numRest ) ) )
		numRest++;

	cout << numApples << endl;

	return 0;
}

int share( int originNumMonkey, int numMonkey, int numThrowed, int numRest )
{
	if ( numMonkey == 1 )
		return numRest * originNumMonkey + numThrowed;
	else if ( ( originNumMonkey * numRest + numThrowed ) % ( originNumMonkey - 1 ) )
		return 0;
	else
		return share( originNumMonkey, numMonkey - 1, numThrowed, ( originNumMonkey * numRest + numThrowed ) / ( originNumMonkey - 1 ) );
}