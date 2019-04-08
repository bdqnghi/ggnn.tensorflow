/*
 * intergratedexercise1.21.cpp
 *
 *  Created on: 2013-12-28
 *      Author: st
 */
int main()
{
	int hill[22][22];
	memset(hill,0,sizeof(hill));
	int m,n;
	cin>>m>>n;
	int i,j;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>hill[i][j];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(hill[i][j]>=hill[i][j-1]&&hill[i][j]>=hill[i][j+1]&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j])
				cout<<i-1<<' '<<j-1<<endl;

}
