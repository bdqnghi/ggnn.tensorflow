int a(int n,int m){
	if(n>=0&&n<=4&&m>=0&&m<=4){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int c[5][5],e[5],d,i,j,n,m;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&c[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
    d=a(n,m);
	if(d==1){
		for(j=0;j<5;j++){
			e[j]=c[n][j];
			c[n][j]=c[m][j];
			c[m][j]=e[j];
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j<4){
				printf("%d ",c[i][j]);
				}
				else{
					printf("%d\n",c[i][j]);
				}
			}
		}

	}
	else{
		printf("error");
	}
	return 0;
}