int a(int x,int y)
{
	if(x<0||y<0||y>4||x>4){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int sz[5][5];
	int n,m;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&m,&n);


	if(a(m,n)==0){
		printf("error");
	}
	if(a(m,n)==1){
		for(int r=0;r<5;r++){
			for(int t=0;t<5;t++){
				if(r==m){
					if(t==4){
						printf("%d\n",sz[n][t]);
					}
					else{
						printf("%d ",sz[n][t]);
					}
				}
				if(r==n){
					if(t==4){
					    printf("%d\n",sz[m][t]);
					}
					else{
						printf("%d ",sz[m][t]);
					}
				}
				if(r!=n&&r!=m){
					if(t==4){
					    printf("%d\n",sz[r][t]);
					}
					else{
						printf("%d ",sz[r][t]);
					}
				}
			}
		}
	}
	return 0;
}

