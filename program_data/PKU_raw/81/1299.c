int f(int n,int m){
	if(n>=5||m>=5||m<0||n<0){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int a[5];
	int i,j,m,n;
	int sz[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(f(n,m)==0){
		printf("error");
	}else{
		for(i=0;i<5;i++){
			a[i]=sz[m][i];
			sz[m][i]=sz[n][i];
			sz[n][i]=a[i];
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j<=3) printf("%d ",sz[i][j]);
				else printf("%d\n",sz[i][j]);
			}
			
		}
	}
	return 0;
}