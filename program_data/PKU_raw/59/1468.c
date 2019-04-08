
int main()
{
		char c[110][110]; //????????110*110?????????
		memset ( c, 0, sizeof(c) ); //?????c
		 
		int n, day, sum = 0; //n?n*n????day??day?,sum???????
		int k = 0; //k??????? 
		
		
		cin >> n;
		cin.get(); //??????? 
		
		for ( int i = 1; i <= n; i++ )
		{
			cin.getline( c[i] + 1, n + 1 ); //?i???1?????n??????'\0',???h+1 
		}
		
		cin >> day;
		
		while ( k < day )
		{
			sum = 0;
			
			for ( int i = 1; i <= n; i++)
			{
					for (int j = 1; j <= n; j++ )
					{
							if ( c[i][j] == '@' )
							{
									sum++;
						  }				  				
					}
			}
			
			for ( int i = 1; i <= n; i++ )
			{
					for ( int j = 1; j <= n; j++ )
					{
						 if 	( c[i][j] == '.' &&
										(c[i][j+1] == '@' || c[i][j-1] == '@' || 
										  c[i+1][j] == '@' || c[i-1][j] == '@' ) )
							{
									c[i][j] = '$';  //??????????????????????
						  }
					}
			}

				for ( int i = 1; i <= n; i++ )
				{
					 for ( int j = 1; j <= n; j++ )
					 {
							if ( c[i][j] == '$' )
								c[i][j] = '@';	
					 }
				}
			
			
			k++;				
		}

		cout << sum << endl;

		return 0;
}
