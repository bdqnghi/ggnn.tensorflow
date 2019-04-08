// ??????.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[]){
	int m,n,row,col,sz[100][100],k;
	scanf("%d%d",&row,&col);
	for(m=0;m<row;m++){
		for(n=0;n<col;n++){
			scanf("%d",&sz[m][n]);
		}	
	}
	for(k=0;k<col;k++){
		m=0;
		n=k;
		while(n>=0&&m!=row){
			printf("%d\n",sz[m][n]);
			m++;
			n--;
		}
	}
	for(k=1;k<row;k++){
		m=k;
		n=col-1;
		while(n>=0&&m!=row){
			printf("%d\n",sz[m][n]);
			m++;
			n--;
		}
	}
	return 0;
}

