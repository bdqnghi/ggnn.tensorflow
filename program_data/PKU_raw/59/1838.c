
char maze[100][100];
int n,m;
int sum;

void test(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(maze[i][j]=='@'){
				if(i-1>=0 && maze[i-1][j]=='.') maze[i-1][j]='!';
				if(i+1<n && maze[i+1][j]=='.') maze[i+1][j]='!';
				if(j-1>=0 && maze[i][j-1]=='.') maze[i][j-1]='!';
				if(j+1<n && maze[i][j+1]=='.') maze[i][j+1]='!';
			}
		}
	}
}

void trans(){
	int cnt = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(maze[i][j]=='!'||maze[i][j]=='@'){
				cnt++;
				if(maze[i][j]=='!'){
					maze[i][j]='@';
				}
			}
		}
	}
	sum = cnt;
}


int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>maze[i][j];
		}
	}
	cin>>m;
	int round = 1;
	trans();
	while(round<m){
		test();
		trans();
		round++;
	}
	cout<<sum<<endl;
	return 0;
}