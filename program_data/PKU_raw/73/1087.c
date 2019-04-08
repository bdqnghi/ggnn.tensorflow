int main() {
	int sz[5][5];
	int max[5];
	int min[5];
	int i,j,k=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<5;i++){
		max[i]=sz[i][0];
		min[i]=sz[0][i];
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(sz[i][j]>max[i]){
				max[i]=sz[i][j];
			}
			if(sz[i][j]<min[j]){
				min[j]=sz[i][j];
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(max[i]==min[j]){
				printf("%d %d %d\n",i+1,j+1,sz[i][j]);
				k++;
			}
		}
	}
	if(k==0){
		printf("not found");
	}
	return 0;
}
