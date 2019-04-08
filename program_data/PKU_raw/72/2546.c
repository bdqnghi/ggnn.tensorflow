/*
 * 2.cpp
 *
 *  Created on: 2013-12-13
 *      Author: g199
 */

int main()
{
	int m,n;
	cin>>m>>n;
	int shan[m+2][n+2];
	for(int i=0; i<=m+1; i++)
		for(int j=0; j<=n+1; j++)
			shan[i][j]=0;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>shan[i][j];

	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
		{
			if(shan[i][j]>=shan[i-1][j] &&
					shan[i][j]>=shan[i+1][j] &&
					shan[i][j]>=shan[i][j-1] &&
					shan[i][j]>=shan[i][j+1] )
				cout<<i-1<<" "<<j-1<<endl;
		}
	return 0;
}
