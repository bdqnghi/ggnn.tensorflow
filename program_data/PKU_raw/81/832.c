int main(){
	int sz[5][5],a,b,m,n,t;
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			if(b<4){
				scanf("%d",&sz[a][b]);
			}else{
				scanf("%d\n",&sz[a][b]);
			}
		}
	}
	scanf("%d%d",&n,&m);
	if(0<=n&&n<=4&&0<=m&&m<=4){
		for(b=0;b<5;b++){
			t=sz[n][b];
			sz[n][b]=sz[m][b];
			sz[m][b]=t;
		}
		for(a=0;a<5;a++){
			for(b=0;b<5;b++){
				if(b<4){
					printf("%d ",sz[a][b]);
				}else{
					printf("%d\n",sz[a][b]);
				}
			}
		}
	}else{
		printf("error");
	}
	return 0;
}