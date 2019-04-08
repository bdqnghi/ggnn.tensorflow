int sz[5][5];
int i,j,e;
int h(int m,int n);
int main(){
	int x,y,a;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d ",&sz[i][j]);
		}
		
	}
	scanf("%d%d",&x,&y);
	a=h(x,y);
	if(a==0){
		printf("error");
	}
	else{
		for(i=0;i<5;i++){
		    for(j=0;j<4;j++){
			   printf("%d ",sz[i][j]);
			}
			printf("%d\n",sz[i][4]);
		}
	}
return 0;
}
int h(int m,int n){
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	if(m<0||m>4||n<0||n>4){
		return 0 ;
	}
	else{
		for(i=0;i<5;i++){
			e=sz[m][i];
			sz[m][i]=sz[n][i];
			sz[n][i]=e;
		}
		return 1;
	}
}




		

  
	










