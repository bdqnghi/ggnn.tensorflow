int dx[8]={0,1,-1,0,1,1,-1,-1};
int dy[8]={1,0,-1,-1,1,-1,0,1};

int main() {
	long long  m,day,a[5][10][10];
	cin>>m>>day;
	for(int z=0;z<=day;z++)
		for(int i=1;i<=9;i++)
			for(int j=1;j<=9;j++)
				a[z][i][j]=0;
	a[0][5][5]=m;
	for(int i=0;i<day;i++) {
		for(int x=1;x<=9;x++) {
			for(int y=1;y<=9;y++) {
				for(int k=0;k<8;k++) 
					a[i+1][x+dx[k]][y+dy[k]]+=a[i][x][y];
				a[i+1][x][y]+=a[i][x][y]*2;
			}
		}
	}
	for (int x=1;x<=9;x++) {
		cout<<a[day][x][1];
		for(int y=2;y<=9;y++) 
			cout<<" "<<a[day][x][y];
		cout<<endl;
	}
	return 0;
}