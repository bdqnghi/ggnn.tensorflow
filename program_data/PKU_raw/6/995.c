

int main()
{
	int k,n,m,sum=0,i,j,p;
	int a[100][100];
	cin>>k;
	while( k>0 )
	{
		cin>>m>>n;
		for( i=0 ; i<m ; i++ )
		{
		     for( j=0 ; j<n ; j++ )
			 {
				 cin>>a[i][j];
		     }
	    }
		if( n==1 && m==1 )
		{
			cout<<a[0][0]<<endl;
		}
		else if( n==1 && m>1 )
		{
			for( i=0 ; i<m ; i++ )
			{
				sum+=a[i][0];
			}
		    cout<<sum<<endl;
		    sum=0;
		}
		else if( n>1 && m==1 )
		{
			for( j=0 ; j<n ; j++ )
			{
				sum+=a[0][j];
			}
			cout<<sum<<endl;
			sum=0;
		}
		else
		{
			for( i=0 ; i<m ;i++ )
			{
				sum+=a[i][0]+a[i][n-1];
			}
		    for( j=0 ; j<n ; j++ )
		    {
			    sum+=a[0][j]+a[m-1][j];
		    }
			sum-=a[0][0]+a[0][n-1]+a[m-1][0]+a[m-1][n-1];
		    cout<<sum<<endl;
		}
		sum=0;
		k--;
	}
}