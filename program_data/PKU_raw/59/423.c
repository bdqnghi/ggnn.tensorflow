int main(){
	int k[101][101];
	char di;
	int i,j,n,m;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%c\n",&di);
			if(di=='#')
				k[i][j]=2;
			else if(di=='@')
				k[i][j]=1;
			else if(di=='.')
				k[i][j]=0;
		}
	}
	scanf("%d",&m);

	int p;
	for(p=1;p<=m-1;p++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(k[i][j]==1){
					if(i-1>=0){
						if(k[i-1][j]==0){
							k[i-1][j]=-1;
						}
					}
					if(i+1<=n-1){
						if(k[i+1][j]==0){
							k[i+1][j]=-1;
						}
					}
					if(j-1>=0){
						if(k[i][j-1]==0){
							k[i][j-1]=-1;
						}
					}
					if(j+1<=n-1){
						if(k[i][j+1]==0){
							k[i][j+1]=-1;
						}
					}
				}
			}
		
		}
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(k[i][j]==-1)
				k[i][j]=1;
		}
		}
	}
	int sum=0;
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(k[i][j]==1){
				sum++;
			}
		}
		}
		printf("%d",sum);
		return 0;
}