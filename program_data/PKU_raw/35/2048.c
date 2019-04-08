
int main(){
    int tag,row,col,i,j,sz[8][8];
	char c;
    scanf("%d%c%d",&row,&c,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&(sz[i][j]));
		}
	}
	int max,dec=0;
	for(i=0;i<row;i++){
		max=0;
		for(j=0;j<col;j++){
			if(sz[i][j]>sz[i][0]){
				max=j;
            }
		}
		tag=0;
		for(j=0;j<row;j++){
			if(sz[j][max]<sz[i][max]){
				tag=1;
				break;
			}
		}
        if(tag==0){
			printf("%d+%d\n",i,max);
			dec=1;
		}
	}
	if(dec==0){
		printf("No");
	}
	return 0;
}
	
		
