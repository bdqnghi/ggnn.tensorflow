int f(int n,int m);
int main(){
	int i,j,n,m;
	int shuzu[5][5]={0};
	int t[5]={0};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&shuzu[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(f(n,m)==0){
		printf("error");
	}else{
		for(j=0;j<5;j++){
		   t[j]=shuzu[n][j];
		   shuzu[n][j]=shuzu[m][j];
		   shuzu[m][j]=t[j];
		}
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				printf("%d ",shuzu[i][j]);
			}printf("%d\n",shuzu[i][j]);
		}
	}
	return 0;
}
int f(int n,int m){
	if(n>=5||m>=5){return 0;}
	return 1;
}