int main()
{
	int n,m,i,j,k,num=0,boo[100][100];
	char p[102][102];
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>p[i][j];
	cin>>m;
	for(j=0;j<=n+1;j++){
		p[0][j]='#';
		p[n+1][j]='#';}
	for(i=1;i<=n;i++){
		p[i][0]='#';
		p[i][n+1]='#';}
    for(k=1;k<m;k++){
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				boo[i][j]=1;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			if(p[i][j]=='@'&&boo[i][j]==1){
				if(p[i-1][j]=='.'){
					p[i-1][j]='@';
					boo[i-1][j]=0;}
				if(p[i+1][j]=='.'){
					p[i+1][j]='@';
					boo[i+1][j]=0;}
				if(p[i][j-1]=='.'){
					p[i][j-1]='@';
					boo[i][j-1]=0;}
				if(p[i][j+1]=='.'){
					p[i][j+1]='@';
					boo[i][j+1]=0;}}}}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(p[i][j]=='@')
				num++;
	cout<<num;
	return 0;
}