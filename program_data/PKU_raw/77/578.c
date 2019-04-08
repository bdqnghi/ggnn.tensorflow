char row[100];
void pipei( int i, char boy, char girl )
{
	int j;
	if ( row[i] == girl )
	{
		for ( j = i - 1; j >= 0; j-- )
		{
			if ( row[j] == boy )
			{
				cout << j << " " << i << endl;
				row[j] = ' ';
				row[i] = ' ';
				break;

		    }
	    }
	}
	if ( row[i + 1] != '\0' )
		pipei( i + 1, boy, girl);

}

int main()
{
	char girl, boy;
	cin.getline( row, 100 );
	boy = row[0];
	int i;
	for ( i = 0; row[i] != '\0'; i++ )
	{
		if ( row[i] != boy )
		{
			girl = row[i];
			break;
		}
	}
	pipei( 1, boy, girl );
	return 0;
}
