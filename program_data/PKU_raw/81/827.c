int fanwei(int x,int y);
int main(){
	int i,j,sz[5][5],m,n,zhongjian[1][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	if(fanwei(m,n)==0){
		printf("error");
		return 0;
	}
	if(fanwei(m,n)==1){
		for(j=0;j<5;j++){
			zhongjian[0][j]=sz[m][j];
		}
	for(j=0;j<5;j++){
			sz[m][j]=sz[n][j];
		}	
	for(j=0;j<5;j++){
			sz[n][j]=zhongjian[0][j];
		}
	
for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j==4){
				printf("%d\n",sz[i][j]);
			}
			else printf("%d ",sz[i][j]);
		}
	}
	}
	 return 0;
	 }
int fanwei(int x,int y){
	if(x<=4&&y<=4&&x>=0&&y>=0){
		return 1;
	}
	else{
		return 0;
	}
}