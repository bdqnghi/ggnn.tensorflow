int main(){
	int sz[10][10];
	int m,n,i,j,a,b,k;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<m;i++){
		int max=0,maxindex;
		for(j=0;j<n;j++){
			if(sz[i][j]>max){
				max=sz[i][j];
			maxindex=j;
		}
		}
		int min=sz[0][maxindex],minindex=0;
		for(k=0;k<m;k++){
			if(sz[k][maxindex]<min){
				minindex=k;
				min=sz[k][maxindex];
			}
		}
		if(minindex==i){
			printf("%d+%d",i,maxindex);
			return 0;
		}
	}
			printf("No");
		return 0;
	}
