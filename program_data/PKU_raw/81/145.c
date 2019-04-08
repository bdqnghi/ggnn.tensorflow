int main(){
	int k,i,n,m,p;
	int a,b;
	int sz[5][5];
	for(k=0;k<5;k++){
			for(i=0;i<5;i++){
				scanf("%d",&(sz[k][i]));
			}
		}
	scanf("%d%d",&n,&m);
	if(n<5&&m<5){
			for(i=0;i<5;i++){
			   a=sz[m][i];
			   b=sz[n][i];
			   sz[m][i]=b;
			   sz[n][i]=a;
			}
			for(k=0;k<5;k++){
			for(i=0;i<5;i++){
				if(i<4){
				printf("%d ",sz[k][i]);
				}
				else if(i==4){
					printf("%d\n",sz[k][i]);
				}
			}
		}
		}
	else if(n>4||m>4){
			printf("error");
	}
	return 0;
}
