/*
 * ????.cpp
 *
 *  Created on: 2013-1-19
 *      Author: sony
 */
int main()
{
	int a[30][30];
	int m,n,i,j;
	cin>>m>>n;
	for(j=0;j<n+1;j++)
	{
		a[0][j]=0;
		a[m+1][j]=0;

	}
	for(i=0;i<m+1;i++)
	{
		a[i][0]=0;
		a[i][n+1]=0;
	}
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	for(i=0;i<m+1;i++)
		for(j=0;j<n+1;j++)
		{
			if( (a[i][j]>=a[i-1][j]) && (a[i][j]>=a[i+1][j]) && (a[i][j]>=a[i][j-1]) && (a[i][j]>=a[i][j+1]) && (i!=0) && (i!=m+1) &&(j!=0) && (j!=n+1))
				cout<<i-1<<' '<<j-1<<endl;
		}
	return 0;
}
