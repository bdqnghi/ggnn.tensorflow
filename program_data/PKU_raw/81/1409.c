int array[5][5];
int check(int N,int M);
void main(){
	int n,m,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&array[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(check(n,m)==1){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("%d",array[i][j]);
				if(j!=4){
					printf(" ");
				}
			}
			if(i!=4){
				printf("\n");
			}
		}
	}
	else if(check(n,m)==0){
		printf("error\n");
	}
}

int check(int N,int M){	
	int i,spare[5];
	if((N>=0)&&(N<5)&&(M>=0)&&(M<5)){
		for(i=0;i<5;i++){
			spare[i]=array[N][i];
			array[N][i]=array[M][i];
			array[M][i]=spare[i];
		}
		return 1;
	}
	else if((N<=0||N>=5)||(M<=0||M>5)){
		return 0;
	}
}