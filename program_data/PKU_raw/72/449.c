/*
 * 1234.cpp
 *
 *  Created on: 2011-1-9
 *      Author: c130
 */
int main()
{
	int m,n,i,j;
	int a[21][21];
	cin >> m  >> n;
	for(i=0;i<m;i++)
	{
		a[i][0]=0;
		a[i][n+1]=0;
	}
	for(i=0;i<m;i++)
		for(j=1;j<=n;j++)
			cin >> a[i][j];
	for(j=1;j<=n;j++)
		if(a[0][j]>=a[0][j-1]&&a[0][j]>=a[0][j+1]&&a[0][j]>=a[1][j])
			cout << 0 << " " << j-1 << endl;
	for(i=1;i<m-1;i++)
			for(j=1;j<=n;j++)
				if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
					cout << i << " " << j-1 << endl;
	for(j=1;j<=n;j++)
			if(a[m-1][j]>=a[m-1][j-1]&&a[m-1][j]>=a[m-1][j+1]&&a[m-1][j]>=a[m-2][j])
				cout << m-1 << " " << j-1 << endl;
	return 0;
}
