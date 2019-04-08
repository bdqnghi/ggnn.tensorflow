/*
 * 1.cpp
 *
 *  Created on: 2012-10-8
 *      Author: Lixurong
 */


int runnian( int a );

int main()
{
	int n, k;//????
	cin >> n;//????
	k = n*(n-1)/2;//????
	double a[n][3];//????
	double b[k][3];//????
	for( int i=0; i<n; i++ )//????
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}
	int p=0;
	for( int i=0; i<n-1; i++ )//??????
	{
		for( int j=i+1; j<n; j++ )
		{
			b[p][1]=i;
			b[p][2]=j;
			b[p][0]=sqrt(pow((a[i][0]-a[j][0]),2)+pow((a[i][1]-a[j][1]),2)+pow((a[i][2]-a[j][2]),2));
			p++;
		}
	}

	for( int i=0; i<k-1; i++ )//????
	{
		for( int j=0;j<k-1; j++ )
		{
			if( b[j][0]<b[j+1][0] )
			{
				double h=b[j][0];
				b[j][0]=b[j+1][0];
				b[j+1][0]=h;
				int s=(int)b[j][1];
				b[j][1]=b[j+1][1];
				b[j+1][1]=s;
				int e=(int)b[j][2];
				b[j][2]=b[j+1][2];
				b[j+1][2]=e;
			}
		}
	}

	for( int i=0; i<k; i++ )//????
	{
		cout << "(" << fixed << setprecision(0) << a[(int)b[i][1]][0] << "," << a[(int)b[i][1]][1] << "," << a[(int)b[i][1]][2]
		     << ")-(" << a[(int)b[i][2]][0] << "," << a[(int)b[i][2]][1] << "," << a[(int)b[i][2]][2]
		     << ")=" << fixed << setprecision(2) << b[i][0];
		if( i!=k-1 )
			cout << endl;
	}

	return 0;
}
