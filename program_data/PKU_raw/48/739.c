int main(){
	static int a[10][20][20],n;
	cin>>a[0][5][5]>>n;
	//????????????????????
	for(int i=1;i<=n;i++){
		for(int x=1;x<=9;x++)
			for(int y=1;y<=9;y++){
				a[i][x+1][y+1]+=a[i-1][x][y];
				a[i][x+1][y]+=a[i-1][x][y];
				a[i][x+1][y-1]+=a[i-1][x][y];
				a[i][x-1][y+1]+=a[i-1][x][y];
				a[i][x-1][y]+=a[i-1][x][y];
				a[i][x-1][y-1]+=a[i-1][x][y];
				a[i][x][y+1]+=a[i-1][x][y];
				a[i][x][y-1]+=a[i-1][x][y];
				a[i][x][y]+=2*a[i-1][x][y];
			}
	}
	//??
	for(int x=1;x<=9;x++){
		for(int y=1;y<=9;y++){
			if(y>1)cout<<" ";
			cout<<a[n][x][y];
		}
		cout<<endl;
	}
	//cin>>n;
	return 0;
}
