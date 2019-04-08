/*
 * lixurong5.cpp
 *
 *  Created on: 2012-11-11
 *      Author: a
 */


int main()
{
    int n;//????
    cin >> n;//??
    char a[n][n];//????
    int b[n][n];//????
    for( int i=0; i<n; i++ )//????
    {
    	for( int j=0; j<n; j++ )
    	{
    		cin >> a[i][j];
    		if( a[i][j] =='.' )//??????????
    			b[i][j]=1;
    		else if( a[i][j]=='@' )
    			b[i][j]=-1;
    		else
    			b[i][j]=0;

    	}
    }


    int m;//????
    cin >> m;
    for( int x=1; x<m; x++ )//????
    {
    	for( int i=0; i<n; i++ )//??
    	{
    		for( int j=0; j<n; j++ )
    		{
    			if( b[i][j]==(0-x) )
    			{
    				if( b[i][j+1]==1 && j+1<n)//???1?????????
    					b[i][j+1]=0-x-1;
    				if( b[i][j-1]==1 && j-1>=0)
    				    b[i][j-1]=0-x-1;
    				if( b[i+1][j]==1 && i+1<n)
    				    b[i+1][j]=0-x-1;
    				if( b[i-1][j]==1 && i-1>=0)
    				    b[i-1][j]=0-x-1;

    			}
    		}
    	}

    }
    int s=0;
    for( int i=0; i<n; i++ )//???????
    {
    	for( int j=0; j<n; j++ )
    	{
    		if( b[i][j]<0 )
    			s++;
    	}
    }
    cout << s;//??


	return 0;
}