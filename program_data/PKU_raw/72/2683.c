int main(){
    int m,n,sz[20][20],i,j;
	scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==0&&j==0){
				if(sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1])
					printf("%d %d\n",i,j);
			}else if(i==0&&j==n-1){
                if(sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i+1][j])
					printf("%d %d\n",i,j);
			}else if(i==m-1&&j==0){
				if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j+1])
                    printf("%d %d\n",i,j);
			}else if(i==m-1&&j==n-1){
				if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j-1])
                    printf("%d %d\n",i,j);
			}else if(i==0&&j!=0&&j!=n-1){
				if(sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1])
					printf("%d %d\n",i,j);
			}else if(i==m-1&&j!=0&&j!=n-1){
				if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1])
					printf("%d %d\n",i,j);
			}else if(j==0&&i!=0&&i!=m-1){
				if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1])
					printf("%d %d\n",i,j);
			}else if(j==n-1&&i!=0&&i!=m-1){
				if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j-1])
					printf("%d %d\n",i,j);
			}else{
			    if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1])
				    printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}