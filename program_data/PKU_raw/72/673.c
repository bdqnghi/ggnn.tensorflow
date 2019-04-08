/*
 * 1.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */
int main()
{
	int i,j,m,n;
	int a[50][50];
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(a[i+1][j]>a[i][j]) continue;
			if(a[i][j+1]>a[i][j]) continue;
			if(i!=0 && a[i-1][j]>a[i][j])continue;
			if(j!=0 && a[i][j-1]>a[i][j])continue;
			cout<<i<<' '<<j<<endl;
		}
	return 0;
}