const int fx[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int w[30][30];
int chk(int x,int y){
	for(int i=0;i<4;i++)
		if(w[x][y]<w[x+fx[i][0]][y+fx[i][1]])return 0;
	return 1;
}
int main(){
	int m,n;
	cin>>m>>n;
	
	memset(w,-32768,sizeof(int));
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cin>>w[i][j];
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)
		if(chk(i,j))cout<<i-1<<' '<<j-1<<endl;

	return 0;
}
