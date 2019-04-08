int main()
{
	int jz[5][5],n,m,i,j,x[5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&jz[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if(n<5&&m<5){
		for(j=0;j<5;j++){
			for(j=0;j<5;j++){
			x[j]=jz[n][j];
			jz[n][j]=jz[m][j];
			jz[m][j]=x[j];
		}
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				printf("%d ",jz[i][j]);
			}
			printf("%d\n",jz[i][4]);
		}
	}
	}
     else{
		printf("error");
	}
	return 0;
}

