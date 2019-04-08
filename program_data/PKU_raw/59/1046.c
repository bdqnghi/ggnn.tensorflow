char a[2][200][200];
int n,m;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
void spread(int i) {
	int ii=(i+1)%2;
	for(int j=1;j<=n;j++) {
		for(int k=1;k<=n;k++) {
			if(a[i][j][k]=='@') {
				for(int l=0;l<4;l++) {
					if(a[i][j+dx[l]][k+dy[l]]!='#')
						a[ii][j+dx[l]][k+dy[l]]='@';
				}
			}
		}
	}
}

long sum(int i) {
	long num=0;
	for(int j=1;j<=n;j++) 
		for(int k=1;k<=n;k++) 
			if(a[i][j][k]=='@')num++;
	return num;
}

int main() {
	int i=0;
	cin>>n;
	for(int j=1;j<=n;j++) {
		for(int k=1;k<=n;k++) {
			cin>>a[0][j][k];
			a[1][j][k]=a[0][j][k];
		}
	}
	cin>>m;
	while(m!=1) {
		spread(i);
		i=(i+1)%2;
		m--;
	}
	cout<<sum(i);
	return 0;
}


