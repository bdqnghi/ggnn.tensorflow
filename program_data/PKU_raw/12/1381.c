//*****************************************
//* ????? **
//* ?????? 1300012741 **
//* ???2013.10.23 **
//*****************************************


int main()
{
	int list[15] = {0};
	int i, j, num, sum;

	cin >> num;

	while ( num != -1 )
	{
		i = 1;
		j = 0;
		sum = 0;
		list[0] = num;
		while ( ( cin >> list[i], list[i] ) != 0 )
			i++;
		while ( list[j] )
		{
			for ( i = j + 1; list[i]; i++ )
			{
				if ( list[i] == 2 * list[j] || 2 * list[i] == list[j] )
					sum++;
			}
			j++;
		}
		cout << sum << endl;
		cin >> num;
	}

	return 0;
}