int main(){
	int n,m,i,j,k,count=0;//k????
	cin>>n;
	char a[110][110][110];
	for(i=1;i<n+1;i++)
		for(j=1;j<n+1;j++)
			cin>>a[1][i][j];//???????
	cin>>m;
	for(k=1;k<m;k++){
		for(i=1;i<n+1;i++)
			for(j=1;j<n+1;j++)
			{
				a[k+1][i][j]=a[k][i][j];//??k????????k+1?
			}
		for(i=1;i<n+1;i++)
			for(j=1;j<n+1;j++)
			{
				if(a[k][i][j]=='@')//????????????????????????
			    {
					if(a[k][i-1][j]=='.') a[k+1][i-1][j]='@';
					if(a[k][i+1][j]=='.') a[k+1][i+1][j]='@';
					if(a[k][i][j-1]=='.') a[k+1][i][j-1]='@';
					if(a[k][i][j+1]=='.') a[k+1][i][j+1]='@';
				}
			}
	}
	for(i=1;i<n+1;i++)
			for(j=1;j<n+1;j++)
			{
				if(a[m][i][j]=='@') count++;
			}
		cout<<count;
	return 0;
}