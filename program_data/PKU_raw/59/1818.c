int main(){
	int n,m,i,j,d,count=0;
	char s[101][101][101];
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>s[i][j][1];
	cin>>m;
	for(d=1;d<=m-1;d++){
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				s[i][j][d+1]=s[i][j][d];
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(s[i][j][d]=='@'){
					if(s[i+1][j][d]=='.') s[i+1][j][d+1]='@';
			        if(s[i-1][j][d]=='.') s[i-1][j][d+1]='@';
			        if(s[i][j+1][d]=='.') s[i][j+1][d+1]='@';
			        if(s[i][j-1][d]=='.') s[i][j-1][d+1]='@';
		}
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			if(s[i][j][m]=='@')
				count+=1;
		}
	cout<<count;
	return 0;
}