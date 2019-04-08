int main(){
	int map[200][200],b[200][200];
	int dx[4]={0,-1,0,1};
	int dy[4]={-1,0,1,0};
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			char ch;
			cin>>ch;
			if(ch=='.')map[i][j]=0;
			else if(ch=='#')map[i][j]=-1;
			else map[i][j]=1;
		}
	cin>>m;
	m--;
	while(m){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				b[i][j]=map[i][j];
		m--;

		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++){
				if(map[i][j]==1){
					for(int k=0;k<4;k++){
						int tx=i+dx[k],ty=j+dy[k];
						if(map[tx][ty]==0)b[tx][ty]=1;
					}
				}		
			}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				map[i][j]=b[i][j];
	}
	int ans=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(map[i][j]==1)ans++;
	cout<<ans<<endl;
	return 0;
}