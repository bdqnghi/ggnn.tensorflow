int main(){
	static int n,a[10][100][100];
	cin>>a[0][5][5];
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int x=1;x<=9;x++)
			for(int y=1;y<=9;y++)
				a[i][x][y]=a[i-1][x][y]*2+a[i-1][x-1][y]+a[i-1][x+1][y]+a[i-1][x][y-1]+a[i-1][x][y+1]+a[i-1][x-1][y-1]+a[i-1][x-1][y+1]+a[i-1][x+1][y-1]+a[i-1][x+1][y+1];
	}
	for(int i=1;i<=9;i++)
		for(int j=1;j<=9;j++){
			if(j-1)cout<<' ';
			cout<<a[n][i][j];
			if(j==9)cout<<endl;
		}
	//cin>>n;
	return 0;
}
