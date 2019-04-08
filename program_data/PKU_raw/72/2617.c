
int main(){
	int m,n;
	cin>>m>>n;
	int mountain[m+2][n+2];
	
	for(int i=0;i<m+2;i++){
		for(int j=0;j<n+2;j++){
			if(i!=0&&j!=0&&i!=m+1&&j!=n+1) cin>>mountain[i][j];
			else mountain[i][j]=-1;
		}
	}
	
	for(int i=1;i<m+1;i++){
		for(int j=1;j<n+1;j++){
			if(mountain[i][j]!=-1){
				if(!(mountain[i-1][j]>mountain[i][j]||
				mountain[i+1][j]>mountain[i][j]||
				mountain[i][j-1]>mountain[i][j]||
				mountain[i][j+1]>mountain[i][j])){
				cout<<i-1<<" "<<j-1<<endl;
				}
			}
		}
	}
}
				