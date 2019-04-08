int exchange(int a,int b){
	if(a>=0&&a<5&&b>=0&&b<5){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n,m,i,j,k,t=0,panduan;
	int sz[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	panduan=exchange(n,m);
	if(panduan){
		for(k=0;k<5;k++){
			t=sz[n][k];
			sz[n][k]=sz[m][k];
			sz[m][k]=t;
		}
		for(i=0;i<5;i++){
		    for(j=0;j<5;j++){
				if(j<4){
			    printf("%d ",sz[i][j]);
				}else if(j=4){
					printf("%d\n",sz[i][j]);
				}
		    }
	    }
	}else{
		printf("error");
	}
	return 0;
}