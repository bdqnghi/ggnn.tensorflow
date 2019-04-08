int main()
{
	int m,n,i,j;
	int data[30][30];
	scanf("%d%d",&m,&n);
	for( i = 1; i <= m; i++ )
		for( j = 1 ; j <= n; j++ )
			scanf("%d",&data[i][j]);
	for( i = 1 ; i <= m; i++ )
		for( j = 1; j <= n; j++ )
		{
			int flag = 1;
			if( i > 1 && data[i-1][j] > data[i][j] )
				flag = 0;
			if( j > 1 && data[i][j-1] > data[i][j] )
				flag = 0;
			if( j < n && data[i][j+1] > data[i][j] )
				flag = 0;
			if( i < m && data[i+1][j] > data[i][j] )
				flag = 0;
			if( flag )
				printf("%d %d\n",i-1,j-1);
		}
		return 0;

}