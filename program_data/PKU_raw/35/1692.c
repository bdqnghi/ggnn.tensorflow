int main(int argc, char* argv[])
{
	int row,col,i,j,k,l=0,t,p;
	int sz[8][8];
    int max,min;	
	scanf("%d,%d",&row,&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<row;i++){
		max=sz[i][0];
		
		for(j=0;j<col;j++){
			if(sz[i][j]>=max){
				max=sz[i][j];
				k=j;
			}
		}
		min=sz[0][k];
		
		for(t=0;t<row;t++){
			if(sz[t][k]<=min){
				min=sz[t][k];
				p=t;
				
			}
		}
		if(min==max){
			printf("%d+%d\n",p,k);
			l++;
		}
		
	}
	if(l==0){
		printf("No\n");
	}
	return 0;
}

