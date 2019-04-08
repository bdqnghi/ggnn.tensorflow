int main()
{
	int a[9][9],b[9][9];                                           //?????????????
	int i=0,j=0,m=0,n=0,k=0,l=0;
	cin>>m>>n;

	for ( i=0;i<9;i++ )
	{
		for ( j=0;j<9;j++ )
		{
			a[i][j]=b[i][j]=0;
		}
	}
	b[4][4]=m;

	while ( k<n )
	{
		for ( i=0;i<9;i++ )                                        //???a????????
		{
			for ( j=0;j<9;j++ )
			{
				if (b[i][j]!=0)
				{
					a[i-1][j-1]=a[i-1][j-1]+b[i][j];
					a[i-1][j]=a[i-1][j]+b[i][j];
					a[i-1][j+1]=a[i-1][j+1]+b[i][j];
					a[i][j-1]=a[i][j-1]+b[i][j];
					a[i][j+1]=a[i][j+1]+b[i][j];
					a[i+1][j-1]=a[i+1][j-1]+b[i][j];
					a[i+1][j]=a[i+1][j]+b[i][j];
					a[i+1][j+1]=a[i+1][j+1]+b[i][j];
				}
			}
		}
		
		for ( i=0;i<9;i++ )                                        //?b???????????
		{
			for ( j=0;j<9;j++ )
			{
				b[i][j]=2*b[i][j]+a[i][j];
				a[i][j]=0;                                         //???a????????
			}
		}                                                          //??b??????????????????
		k++;
	}
	
	for ( i=0;i<9;i++ )
	{
		for ( j=0;j<9;j++ )
		{
			if ( j!=8 )
				cout<<b[i][j]<<" ";
			else if ( j==8 )
				cout<<b[i][j]<<endl;
		}
	}
	return 0;
}