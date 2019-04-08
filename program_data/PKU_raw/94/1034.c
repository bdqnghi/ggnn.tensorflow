/*
 * 1.cpp
 *
 *  Created on: 2012-10-8
 *      Author: Lixurong
 */


int runnian( int a );

int main()
{
	int n;//????
	cin >> n;//??
	int a[n], b[n], k=0;//????
	for( int i=0; i<n; i++ )//??
	{
		cin >> a[i];//??
		if( a[i]%2!=0 )//??
		{
			b[k]=a[i];//???????
			k++;
		}
	}
	for( int i=0; i<k-1; i++ )//??????
	{
		for( int j=0; j<k-1; j++ )
		{
			if( b[j]>b[j+1] )//??
			{
				int h=b[j+1];
				b[j+1]=b[j];
				b[j]=h;
			}
		}
	}
	for( int i=0; i<k; i++ )//??
	{
		cout << b[i];
		if( i!=k-1 )
			cout << ",";
	}

	return 0;
}
