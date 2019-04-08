/*
 * 1.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 1100012870 liwenpeng
 */
char c[101][101],a[101][101];
int n;

void flu(int x,int y)
{
	if(x!=0 && c[x-1][y]=='.') c[x-1][y]='@';
	if(y!=0 && c[x][y-1]=='.') c[x][y-1]='@';
	if(x!=n-1 && c[x+1][y]=='.') c[x+1][y]='@';
	if(y!=n-1 && c[x][y+1]=='.') c[x][y+1]='@';
}

int main()
{
	int j,i,m;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{
			cin>>c[i][j];
			a[i][j]=a[i][j];
			}
	cin>>m;
	for(int k=1;k<=m;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[i][j]=='@')
					flu(i,j);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j]=c[i][j];
	}
	int ans=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(c[i][j]=='@')ans++;
		}
	cout<<ans;
	return 0;
}