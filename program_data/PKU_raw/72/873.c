int main(){
int m,n,i,k,t;
int sz[20][20];
scanf("%d %d",&m,&n);
for(i=0;i<m;i++){
	for(k=0;k<n;k++){
		scanf("%d",&sz[i][k]);
	}
}
for(i=0;i<m;i++){
	for(k=0;k<n;k++){
		if(i==0){
			if(k==0&&sz[0][0]>=sz[0][1]&&sz[0][0]>=sz[1][0]){
				printf("0 0\n");
			}else if(k==n-1&&sz[0][n-1]>=sz[1][n-1]&&sz[0][n-2]<=sz[0][n-1]){
				printf("0 %d\n",n-1);
			}else if(sz[0][k]>=sz[0][k-1]&&sz[0][k]>=sz[0][k+1]&&sz[0][k]>=sz[1][k]){
				printf("0 %d\n",k);
			}
		}else if(i==m-1){
			if(k==0&&sz[m-1][0]>=sz[m-1][1]&&sz[m-1][0]>=sz[m-2][0]){
				printf("%d 0\n",m-1);
			}else if(k==n-1&&sz[m-1][n-1]>=sz[m-2][n-1]&&sz[m-1][n-1]>=sz[m-1][n-2]){
				printf("%d %d\n",m-1,n-1);
			}else if(sz[m-1][k]>=sz[m-1][k-1]&&sz[m-1][k]>=sz[m-1][k+1]&&sz[m-1][k]>=sz[m-2][k]){
				printf("%d %d\n",m-1,k);
			}
		}else if(k==0){
			if(sz[i][0]>=sz[i][1]&&sz[i][0]>=sz[i-1][0]&&sz[i][0]>=sz[i+1][0]){
				printf("%d 0\n",i);
			}
		}else if(k==n-1){
			if(sz[i][n-1]>=sz[i][n-2]&&sz[i][n-1]>=sz[i-1][n-1]&&sz[i][n-1]>=sz[i+1][n-1]){
				printf("%d %d\n",i,n-1);
			}
		}else{
			if(sz[i][k]>=sz[i][k-1]&&sz[i][k]>=sz[i][k+1]){
				if(sz[i][k]>=sz[i-1][k]&&sz[i][k]>=sz[i+1][k]){
					printf("%d %d\n",i,k);
				}
			}
		}
	}
}
return 0;
}
