int h(int m,int n){
	int g;
	if(m<=4&&m>=0&&n>=0&&n<=4){
		g=1;
	}
	else {
		g=0;
	}
	return g;
}
int main () {
	int a[5][5],i,j,e,x,y;
    for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf ("%d %d",&x,&y);
	if(h(x,y)){
		for (j=0;j<5;j++){
			e=a[x][j];
			a[x][j]=a[y][j];
			a[y][j]=e;
		}
		for (i=0;i<5;i++){
			for (j=0;j<4;j++){
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][4]);
		}
	}
		else {
			printf("error");
		}
		return 0;
}
	
