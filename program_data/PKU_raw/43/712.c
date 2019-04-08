/*
 * 1.cpp
 *
 *  Created on: 2012-10-8
 *      Author: Lixurong
 */


int runnian( int a );

int main()
{
	int m;
	cin >> m;
	int a[5000]={0};
	a[1]=2;
	int s=2;
	for( int i=3; i<10000; i++ )
	{
        int k=1;
		for( int j=1; a[j]*a[j]<=i; j++ )
         {
        	 if( i%a[j]==0 )
        	 {
        		 k = 0;
        		 break;
        	 }
         }
		if( k==1 )
		{
			a[s]=i;
			s++;
		}
	}
	for( int i=1; a[i]<m; i++ )
	{
		for( int j=i; a[j]<m; j++ )
		{
			if( a[i]+a[j]==m )
			{
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}
	return 0;
}