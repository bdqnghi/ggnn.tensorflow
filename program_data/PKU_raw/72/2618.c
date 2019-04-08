
int main(){
	int m,n;
	cin>>m>>n;
	int hill[m+2][n+2];
	for(int i=0;i<(m+2)*(n+2);i++){
		hill[0][i]=0;
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>hill[i][j];
		}
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(hill[i][j]>=hill[i+1][j]&&
					hill[i][j]>=hill[i-1][j]&&
					hill[i][j]>=hill[i][j+1]&&
					hill[i][j]>=hill[i][j-1]){
				cout<<i-1<<' '<<j-1<<endl;
			}
		}
	}
}
