
int main()
{
 	int a[25][25], m, n, k;
 	int dx[4] = { 0, 0, 1, -1 }, dy[4] = { 1, -1, 0, 0 };
 	cin >> m >> n;
 	
 	for (  int i = 0; i < m; i++ )
 	{
  	 	for (  int j = 0; j < n; j++ )
  	 		cin >> a[i][j];
 	}
 	
 	for ( int i = 0; i < m; i++ )
 	{
  	 	for ( int j = 0; j < n; j++ )
  	 	{
  	  	 	for ( k = 0; k < 4; k++ )
  	  	 	{
  	  		 	if ( i + dx[k] >= 0 && i + dx[k] < m && j + dy[k] >= 0 && j + dy[k] < n )
  	  		 	{
   	   	 		    if ( a[i][j] < a[i+dx[k]][j+dy[k]] )
   	   	 		       break;
		   		}
			}
			if ( k == 4 )
			   cout << i << " " << j << endl;
	 	}
  	}
  	return 0;
}