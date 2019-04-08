int main(){
	int a[5][10][10]={0},k,i,j,m,n;
	scanf("%d%d",&m,&n);
	for (i=0;i<=10;i++){
			for (j=0;j<=10;j++){
				a[0][i][j]=0;
			}
	}
	a[0][5][5]=m;
	for (k=1;k<=n;k++){
		for (i=1;i<=9;i++){
			for (j=1;j<=9;j++){
				a[k][i][j]=a[k-1][i][j]*2+a[k-1][i-1][j-1]+a[k-1][i][j-1]+a[k-1][i-1][j]+a[k-1][i][j+1]+a[k-1][i+1][j]+a[k-1][i+1][j+1]+a[k-1][i+1][j-1]+a[k-1][i-1][j+1];
			}
		}
	}
	for (i=1;i<=9;i++){
		for (j=1;j<=9;j++){
			if ((abs(i-5)>n)||(abs(j-5)>n))
				a[k][i][j]=0;
		}
	}
	for (i=1;i<=9;i++){
		for (j=1;j<=9;j++){
			if (j!=9)
			   printf("%d ",a[n][i][j]);
			else printf("%d",a[n][i][j]);
		}
		printf("\n");
	}
	return 0;
}
