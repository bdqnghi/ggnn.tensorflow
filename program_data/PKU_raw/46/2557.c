

int main()
{
	int row,col,i,j,k,l,m;
	int a[100][100];
	int b[10000];
	cin>>row>>col;
	for( i=0 ; i<row ; i++ )
	{
		for( j=0 ; j<col ; j++ )
		{
			cin>>a[i][j];
		}
	}
	for( i=0 ; i<=row/2 ; i++ )
	{
		for( j=i ; j<col-i ; j++ )
		{
			cout<<a[i][j]<<endl;
			if( j==col-i-1 )
			{
				for( k=i+1 ; k<row-i ; k++ )
				{
					cout<<a[k][j]<<endl;
					if( k==row-i-1 )
					{
						for( l=col-i-2 ; l>=i ; l-- )
						{
							cout<<a[k][l]<<endl;
							if( l==i )
							{
								for( m=row-i-2 ; m>i ; m-- )
								{
									cout<<a[m][l]<<endl;
								}
							}
						}
					}
				}
			}
		}
	}
}