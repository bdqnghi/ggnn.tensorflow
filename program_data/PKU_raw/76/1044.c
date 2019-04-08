int main(){
	int n;
	scanf("%d",&n);
	int sz[50001][2];
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&sz[i][0],&sz[i][1]);
	}
	int j,k,t1,t2;
	for(j=n-1;j>0;j--){
		for(k=0;k<j;k++){
			if(sz[k][0]>=sz[k+1][0]){
				t1=sz[k][0];
				sz[k][0]=sz[k+1][0];
				sz[k+1][0]=t1;
				t2=sz[k][1];
				sz[k][1]=sz[k+1][1];
				sz[k+1][1]=t2;
			}
		}
	}
	int p=0;
	for(j=1;j<n;j++){
		for(i=0;i<j;i++){
			if(sz[i][1]>=sz[j][0]){
				p++;
				break;
			}
		}
	}
	for(j=n-1;j>0;j--){
		for(k=0;k<j;k++){
			if(sz[k][1]>=sz[k+1][1]){
				t1=sz[k][1];
				sz[k][1]=sz[k+1][1];
				sz[k+1][1]=t1;
			}
		}
	}
	if(p==n-1){
		printf("%d %d",sz[0][0],sz[n-1][1]);
	}
	else printf("no");
return 0;
}

