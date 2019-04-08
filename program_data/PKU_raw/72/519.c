int main(){
	int array[30][20],i,j,m,n;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==00&&j==0){
				if(array[i][j]>=array[i+1][j]&&array[i][j]>=array[i][j+1]){
					printf("0 0\n");
				}
			}
			if(i==0&&j!=0&&j!=n-1){
				if(array[i][j]>=array[i][j-1]&&array[i][j]>=array[i][j+1]&&array[i][j]>=array[i+1][j]){
					printf("%d %d\n",i,j);
				}
			}
			if(i==0&&j==n-1){
				if(array[i][j]>=array[i][j-1]&&array[i][j]>=array[i+1][j]){
					printf("%d %d\n",i,j);
				}
			}
			if(i!=0&&i!=m-1&&j==0){
				if(array[i][j]>=array[i-1][j]&&array[i][j]>=array[i+1][j]&&array[i][j]>=array[i][j+1]){
					printf("%d %d\n",i,j);
				}
			}
			if(i!=0&&j!=0&&i!=m-1&&j!=n-1){
				if(array[i][j]>=array[i-1][j]&&array[i][j]>=array[i+1][j]&&array[i][j]>=array[i][j-1]&&array[i][j]>=array[i][j+1]){
					printf("%d %d\n",i,j);
				}
			}
			if(i!=0&&i!=m-1&&j==n-1){
				if(array[i][j]>=array[i][j-1]&&array[i][j]>=array[i+1][j]&&array[i][j]>=array[i-1][j]){
					printf("%d %d\n",i,j);
				}
			}
			if(i==m-1&&j==0){
				if(array[i][j]>=array[i-1][j]&&array[i][j]>=array[i][j+1]){
					printf("%d %d\n",i,j);
				}
			}
			if(i==m-1&&j!=0&&j!=n-1){
				if(array[i][j]>=array[i-1][j]&&array[i][j]>=array[i][j-1]&&array[i][j]>=array[i][j+1]){
					printf("%d %d\n",i,j);
				}
			}
			if(i==m-1&&j==n-1){
				if(array[i][j]>=array[i-1][j]&&array[i][j]>=array[i][j-1]){
					printf("%d %d",i,j);
				}
			}
		}
	}
	return 0;
}