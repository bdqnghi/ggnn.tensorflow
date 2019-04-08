
int main()
{
	int w[ 4 ];
	char name[ 4 ] = {'z', 'q', 's', 'l'};
	int i, j;
	for ( w[z] = 10; w[z] <= 50; w[z]+= 10 )
	{

		for ( w[q] = 10; w[q] <= 50; w[q]+= 10 )
		{
			if ( w[q] == w[z] )
			{
				continue;
			}
			for ( w[s] = 10; w[s] <= 50; w[s]+= 10 )
			{
				if ( w[s] == w[z] || w[s] == w[q] )
				{
					continue;
				}
				for ( w[l] = 10; w[l] <= 50; w[l]+= 10 )
				{
					if ( w[l] == w[z] || w[l] == w[q] || w[l] == w[s] )
					{
						continue;
					}
					if ( ((w[z] + w[q]) == ( w[s] + w[l] )) && (( w[z] + w[l] ) >( w[s] + w[q] )) && (( w[z] + w[s] )< w[q]))
					{
						for ( i = 50; i >= 10; i= i - 10 )
						{
							for ( j = 0; j < 4; j++ )
							{
								if ( w[ j ] == i )
								{
									cout << name[ j ] << " " << w[ j ] << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;

}

