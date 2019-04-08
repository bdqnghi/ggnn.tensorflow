/*
 * 2.cpp
 *
 *  Created on: 2012-11-11
 *      Author: a
 */
int main()
{
	int n,i,j,d,m;
	cin>>n;
	char s[n][n],a[n][n],b[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>s[i][j];
	cin>>m;
	for(d=1;d<m;d++){
		for(i=0;i<n;i++)
			for(j=0;j<n;j++){
		     a[i][j]=s[i][j];
			 b[i][j]=s[i][j];
			}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[i][j]=='@'){
					if(i-1>=0&&a[i-1][j]=='.') a[i-1][j]='@';
					if(j-1>=0&&a[i][j-1]=='.') a[i][j-1]='@';
				}
			for(i=n-1;i>=0;i--)
				for(j=n-1;j>=0;j--)
					if(b[i][j]=='@'){
						if(i+1<n&&b[i+1][j]=='.') b[i+1][j]='@';
						if(j+1<n&&b[i][j+1]=='.') b[i][j+1]='@';
					}

			for(i=0;i<n;i++)
				for(j=0;j<n;j++){
				if(a[i][j]=='@') s[i][j]=a[i][j];
				if(a[i][j]=='.'&&b[i][j]=='@') s[i][j]=b[i][j];
				}
	}
	int cont=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(s[i][j]=='@') cont++;
	cout<<cont<<endl;
	return 0;

}
