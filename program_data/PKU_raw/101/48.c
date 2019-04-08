/**
 * ??? ???
 * ??? 1000012844
 * ??? ???
 **/




int main()
{
	int i, j;
	int amount[ 3 ];
	int truth[ 3 ];
	char name[ 3 ] = { 'A', 'B', 'C' };
	int smallest;

	

	for ( amount[ A ] = 1; amount[ A ] <= 3; amount[ A ]++ )
	{
		for ( amount[ B ] = 1; amount[ B ] <= 3; amount[ B ]++ )
		{
			for ( amount[ C ] = 1; amount[ C ] <= 3; amount[ C ]++ )
			{
				truth[ A ] = ( amount[ B ] > amount[ A ] ) + ( amount[ C ] == amount[ A ] );
				truth[ B ] = ( amount[ A ] > amount[ B ] ) + ( amount[ A ] > amount[ C ] );
				truth[ C ] = ( amount[ C ] > amount[ B ] ) + ( amount[ B ] > amount[ A ] );

				if ( ( ( ( truth[ A ] > truth[ B ] ) && ( amount[ A ] < amount[ B ] ) )
					|| ( ( truth[ A ] == truth[ B ] ) && ( amount[ A ] == amount[ B ] ) ) ||
					( ( truth[ A ] < truth[ B ] ) && ( amount[ A ] > amount[ B ] ) ) ) &&
					( ( ( truth[ C ] > truth[ B ] ) && ( amount[ C ] < amount[ B ] ) )
					|| ( ( truth[ C ] == truth[ B ] ) && ( amount[ C ] == amount[ B ] ) ) ||
					( ( truth[ C ] < truth[ B ] ) && ( amount[ C ] > amount[ B ] ) ) ) &&
					( ( ( truth[ A ] > truth[ C ] ) && ( amount[ A ] < amount[ C ] ) )
					|| ( ( truth[ A ] == truth[ C ] ) && ( amount[ A ] == amount[ C ] ) ) ||
					( ( truth[ A ] < truth[ C ] ) && ( amount[ A ] > amount[ C ] ) ) ) )
				{
					for ( i = 1; i <= 3; i++ )
					{
						for ( j = 0; j <= 2; j++ )
						{
							if ( amount[ j ] == i )
							{
								cout << name[ j ];
							}
						}
					}
				}

			}
		}
	}
}