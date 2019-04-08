int main(){
	int sz[5][5];
	int i,k,e,a,n,m;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			scanf("%d",&sz[k][i]);
		}
	}
	scanf("%d %d",&n,&m);
	if(n<5&&m<5){
		for(i=0;i<5;i++){
			e=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=e;
		}
		a=1;
	}else{
		a=0;
	}
	if(a==1){
		for(k=0;k<5;k++){
			printf("%d %d %d %d %d\n",sz[k][0],sz[k][1],sz[k][2],sz[k][3],sz[k][4]);
		}
	}else if(a==0){
		printf("error");
	}
	return 0;
}