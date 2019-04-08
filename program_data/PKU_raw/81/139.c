int main(){
	int n,m,i,j,a[5][5],e[5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
	if(n>4||m>4||n<0||m<0)
		printf("error");
	else{
		for(j=0;j<5;j++){
			e[j]=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=e[j];
		}
		for(i=0;i<5;i++){
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				printf(" %d",a[i][j]);
			printf("\n");
		}
	}
	return 0;
}