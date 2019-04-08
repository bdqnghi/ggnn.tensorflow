int x(int m,int n,int sz[5][5]);
int main(){
	int m,n,i,j,sz[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		   scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	if(x(m,n,sz)==1){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==4){
				   printf("%d\n",sz[i][j]);
				}else{
					printf("%d ",sz[i][j]);
				}
			}
		}
	}else if(x(m,n,sz)==0){
		printf("error");
	}
	return 0;
}
int x(int m,int n,int sz[5][5]){
	int ty[1][5],i;
	if(m>=0&&m<5&&n<5&&n>=0){
		for(i=0;i<5;i++){
		   ty[0][i]=sz[m][i];
		   sz[m][i]=sz[n][i];
		   sz[n][i]=ty[0][i];
		}
		return 1;
	}else{
		return 0;
	}
}