int main()
{
	int m,n ;
	int i,j ;
	cin>>m>>n ;
	int a[22][22] = {0} ;
	for(i=1 ; i<=m ; i++)
	{
		for(j=1; j<=n ; j++)
		{
			cin>>a[i][j] ;
		}
	}
	int b[400][2] ;
	int count = 0 ;
	for(i=1 ; i<=m ; i++)
	{
		for(j=1 ; j<=n ; j++)
		{
			if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1]))
			{
				b[count][0] = i-1 ;
				b[count][1] = j-1 ;
				count++ ;
			}
		}
	}
	for(i=0 ; i<count-1 ; i++)
	{
		for(j=0 ; j<count-i-1 ;i++)
		{
			if(b[j][1]>b[j+1][1])
			{
				int temp1,temp2 ;
				temp1 = b[j][0] ;
				b[j][0] = b[j+1][0] ;
				b[j+1][0] = temp1 ;
				temp2 = b[j][1] ;
				b[j][1] = b[j+1][1] ;
				b[j+1][1] = temp2 ;
			}
		}
	}
	for(i=0 ; i<count-1 ; i++)
	{
		for(j=0 ; j<count-1-i ;j++)
		{
			if(b[j][0]>b[j+1][0])
			{
				int temp3,temp4 ;
				temp3= b[j][0] ;
				b[j][0] = b[j+1][0] ;
				b[j+1][0] = temp3 ;
				temp4 = b[j][1] ;
				b[j][1] = b[j+1][1] ;
				b[j+1][1] = temp4 ;
			}
		}
	}
	for( i = 0 ; i<count ; i++)
	{
		cout<<b[i][0]<<" "<<b[i][1]<<endl ;
	}
	return 0 ;
}


	

