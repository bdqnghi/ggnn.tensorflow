int in_or_not(int n,int m);
int main()
{
	int data[5][5],temp[5];
	int n,m,i,j,result;
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			scanf("%d",&data[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	result=in_or_not(n,m);
	if(result==0){
		printf("error");
	}
	if(result==1){
		for(i=0;i<5;i++){
			temp[i]=data[i][n];
			data[i][n]=data[i][m];
			data[i][m]=temp[i];
		}
		for(j=0;j<5;j++){
			printf("%d %d %d %d %d\n",data[0][j],data[1][j],data[2][j],data[3][j],data[4][j]);
		}
	}
	return 0;
}
int in_or_not(int n,int m){
	if(n>=0&&n<=4&&m>=0&&m<=4){
		return 1;
	}else
		return 0;
}