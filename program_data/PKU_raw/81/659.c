int juzhen(int m,int n);
int sz[5][5];
int main(){
	
    int i,j,x,y,a;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&x,&y);
	a=juzhen(x,y);
	if(a==0){
		printf("error");
	}
	else{
        for(i=0;i<5;i++){
		  printf("%d %d %d %d %d\n",sz[i][0],sz[i][1],sz[i][2],sz[i][3],sz[i][4]);
		}
	}
return 0;
}
int juzhen(int m,int n){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	if(m<0||m>4||n<0||n>4){
		return 0;
	}
	else{
		int e;
		for(i=0;i<5;i++){
			e=sz[m][i];
			sz[m][i]=sz[n][i];
			sz[n][i]=e;
		}
		return 1;
	}
}
