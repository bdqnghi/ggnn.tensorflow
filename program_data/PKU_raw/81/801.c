int judge(int a,int b){
	if(a>=0&&a<5&&b>=0&&b<5){
		return 1;
	}
	return 0;
}
int main(){
	int a[5][5];
	int i,j,tmp;
	for(i=0;i<5;i++){
		scanf("%d%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	}
	int n,m;
	scanf("%d%d",&n,&m);
	if(judge(n,m)==0){
		printf("error");
	}
	if(judge(n,m)!=0){
		for(j=0;j<5;j++){
			tmp=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=tmp;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j!=4){
					printf("%d ",a[i][j]);
				}
				if(j==4){
					printf("%d\n",a[i][j]);
				}
			}
		}
		
	}
	return 0;
}