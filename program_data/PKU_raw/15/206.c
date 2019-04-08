int main()
{
	int m,i,j,k,s=0;
	scanf("%d",&m);
	int area[n][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&area[i][j]);
		}
	}
	k = 0;
	int ib = 0,jb = 0,ie = 0 , je = 0 ;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(area[i][j]==0)
			{
				k++;
				if ( k == 1 )
				{
					ib = i;
					jb = j;
					break;
				}
			}	
		}
	}
	k = 0 ;
	for ( i = m - 1 ; i >= 0 ; i-- )
	{
		for ( j = m - 1 ; j >= 0 ; j-- )
		{
			if ( area[i][j] == 0 )
			{
				k++;
				if ( k == 1 )
				{
					ie = i ;
					je = j;
					break;
				}
			}
		}
	}
	s = ( ie - ib - 1 ) * ( je - jb - 1 );				
	printf("%d\n",s);
	return 0;
}