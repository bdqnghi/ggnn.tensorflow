int main(){
    int z[5][5],x[5][5];
    int n,m,i=0;
    for(int row = 0; row  < 5; row++){
    		for(int col = 0; col < 5; col++){
					scanf("%d", &z[row][col]);
			}
	}
    for(int row = 0; row  < 5; row++){
        	for(int col = 0; col < 5; col++){
				x[row][col]=z[row][col];
			}
	}
    scanf("%d%d",&n,&m);
    if(n<=4&&n>=0&&m<=4&&m>=0){
        for(int i=0;i<5;i++){
            x[n][i]=z[m][i];
            x[m][i]=z[n][i];
        }
         for(int row = 0; row  < 5; row++){
            for(int col = 0; col <4; col++){
				printf("%d ",x[row][col]);
			}
            printf("%d",x[row][4]);
            printf("\n");
	}
    }
    else{
        printf("error");
    }
    return 0;
}