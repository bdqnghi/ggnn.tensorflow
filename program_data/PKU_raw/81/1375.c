
int turn(int sz[5][5],int n,int m);
int main()
{
	int sz[5][5],i,j,n,m;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(turn(sz,n,m)){
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				printf("%d ",sz[i][j]);	
			}
			if(j==4){
				printf("%d\n",sz[i][j]);
			}
		}	
	}else{
		printf("error");
	}
	return 0;
}

int turn(int sz[5][5],int n,int m){
	int i,temp;
	if((n>=0&&n<=4)&&(m>=0&&m<=4)){
		for(i=0;i<5;i++){
			temp=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=temp;
		}
		return 1;
	}else{
		return 0;
	}
}