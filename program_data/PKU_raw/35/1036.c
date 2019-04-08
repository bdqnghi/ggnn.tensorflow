int main(){
	int row,col,sz[8][8];
	scanf("%d,%d",&row,&col);
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int a=0,n,k,m;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(sz[i][j]>a){
				a=sz[i][j];
				n=i;
				k=j;
			}
		}
	int f;
	for(m=1;m<=row;m++){
		for(int p=0;p<row-m;p++){
			if(sz[p][k] > sz[p+1][k]){
					f = sz[p+1][k];
					sz[p+1][k] = sz[p][k];
					sz[p][k] = f;
			}
		}
	}
	if(sz[0][k]==a){
		printf("%d+%d\n",n,k);
	return 0;
      }
	}
	printf("No\n");
	return 0;
}