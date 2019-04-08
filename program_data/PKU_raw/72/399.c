/*
 * 4.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int a[1000][1000];
	int m, n, i ,j;
	cin>>m>>n;
	for(i=1; i<=m; i++)
		for(j=1; j<=n; j++)
		{
			cin>>a[i][j];
		}
	for(i=0; i<=m+1; i++)
		a[i][0]=a[i][n+1]=-1;
	for(i=0; i<=n+1; i++)
		a[0][i]=a[m+1][i]=-1;
	for(i=1; i<=m; i++)
		for(j=1; j<=n; j++)
		{
			if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1]))
				cout<<i-1<<" "<<j-1<<endl;
		}
	return 0;
}
