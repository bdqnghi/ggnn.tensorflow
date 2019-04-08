int main(){
	int row,col,sz[10][10],i,j,n[10][10];
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int a=0,p=0,c=0,b;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			n[i][j]=sz[i][j];
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col-1;j++){
			if(n[i][j]>n[i][j+1]){
				n[i][j+1]=n[i][j];
			}
			else{
				a=j+1;
			}
		}
		for(b=0;b<row;b++){
			if(sz[i][a]>sz[b][a]){
				p++;
			}
		}
		if(p==0){
			printf("%d+%d",i,a);
			c++;
		}
	}
	if(c==0){
		printf("No");
	}
	return 0;
}



