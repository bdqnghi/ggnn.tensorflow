/*
 * main.cpp
 *
 *  Created on: 2012-11-11
 *      Author: ??
 *      ????
 */


int main()
{
	char a[110][110],b[110][110];
	int i,j,n,m,sum=0,t;

	cin>>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			cin>>a[i][j];
	cin>>m;
	for (i=0;i<=n+1;i++)
	{
		a[0][i]='#';a[n+1][i]='#';a[i][0]='#';a[i][n+1]='#';
	}
	for (t=1;t<m;t++)
	{
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
			{
				if (a[i][j]=='.')
					if ((a[i][j-1]=='@')||(a[i][j+1]=='@')||(a[i-1][j]=='@')||(a[i+1][j]=='@'))
						b[i][j]='@';
					else
						b[i][j]='.';
				else
					b[i][j]=a[i][j];
			}
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				a[i][j]=b[i][j];
	}
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			if (a[i][j]=='@') sum++;
	cout<<sum;
    return 0;
}