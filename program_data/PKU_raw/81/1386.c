int exchange(int n,int m,int num[5][5])
{
	int i;
	int t;
	if(n>=0&&n<5&&m>=0&&m<5){
		for(i=0;i<5;i++){
			t=num[n][i];
			num[n][i]=num[m][i];
			num[m][i]=t;
		}
		return 1;
	}
	if(n<0||n>=5||m<0||m>=5){
		return 0;
	}
}

int main()
{
    int num[5][5];
	int i,j;
	int n,m;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&num[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	
	if(exchange(n,m,num)==1){
		for(i=0;i<5;i++){
		    for(j=0;j<4;j++){
			    printf("%d ",num[i][j]);
			}
		    printf("%d",num[i][4]);
		    printf("\n");
		}
	}
	if(exchange(n,m,num)==0){
		printf("error\n");
	}

	return 0;
}
