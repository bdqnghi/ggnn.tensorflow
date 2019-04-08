int main(){
	int a[5][5],m,n,e[5];
	int i=0;
	int j=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	if(m<5&&n<5&&m!=n&&m>=0&&n>=0){
	for(j=0;j<5;j++){
		e[j]=a[m][j];
		a[m][j]=a[n][j];
		a[n][j]=e[j];
	}
	printf("%d ",a[0][0]);
	printf("%d ",a[0][1]);
	printf("%d ",a[0][2]);
	printf("%d ",a[0][3]);
	printf("%d\n",a[0][4]);
	printf("%d ",a[1][0]);
	printf("%d ",a[1][1]);
	printf("%d ",a[1][2]);
	printf("%d ",a[1][3]);
	printf("%d\n",a[1][4]);
	printf("%d ",a[2][0]);
	printf("%d ",a[2][1]);
	printf("%d ",a[2][2]);
	printf("%d ",a[2][3]);
	printf("%d\n",a[2][4]);
	printf("%d ",a[3][0]);
	printf("%d ",a[3][1]);
	printf("%d ",a[3][2]);
	printf("%d ",a[3][3]);
	printf("%d\n",a[3][4]);
	printf("%d ",a[4][0]);
	printf("%d ",a[4][1]);
	printf("%d ",a[4][2]);
	printf("%d ",a[4][3]);
	printf("%d\n",a[4][4]);
	}else{
		printf("error");
	}
	return 0;
}