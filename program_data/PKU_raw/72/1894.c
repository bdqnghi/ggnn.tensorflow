//============================================================================
// Name        : xunzhaoshanding.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



int main() {
	int m,n;
	int a[21][21];
	cin>>m;
	cin>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	if(a[0][0]>=a[1][0]&&a[0][0]>=a[0][1])cout<<0<<' '<<0<<endl;

	for(int c=1;c<n-1;c++)
		if(a[0][c]>=a[0][c-1]&&a[0][c]>=a[0][c+1]&&a[0][c]>=a[1][c])cout<<0<<' '<<c<<endl;

	if(a[0][n-1]>=a[0][n-2]&&a[0][n-1]>=a[1][n-1])cout<<0<<' '<<n-1<<endl;

	for(int i=1;i<m-1;i++)
			for(int j=0;j<n;j++)
			{
				if(j==0)
				{
					if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])cout<<i<<' '<<j<<endl;
			    }

				else if(j==n-1)
								{
									if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])cout<<i<<' '<<j<<endl;
							    }
				else
				{
					if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])cout<<i<<' '<<j<<endl;
				}

			}

	if(a[m-1][0]>=a[m-2][0]&&a[m-1][0]>=a[m-1][1])cout<<m-1<<' '<<0<<endl;

		for(int c=1;c<n-1;c++)
			if(a[m-1][c]>=a[m-1][c-1]&&a[m-1][c]>=a[m-1][c+1]&&a[m-1][c]>=a[m-2][c])cout<<m-1<<' '<<c<<endl;

		if(a[m-1][n-1]>=a[m-1][n-2]&&a[m-1][n-1]>=a[m-2][n-1])cout<<m-1<<' '<<n-1<<endl;
	return 0;
}
