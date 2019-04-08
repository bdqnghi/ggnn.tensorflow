int main()
{
	int m,n,a,b,c,d,e;
	int row,col;
	int sz[ROW][COL];
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			scanf("%d",&sz[row][col]);}}
		scanf("%d %d",&n,&m);
			if(n>4||n<0||m>4||m<0){
				printf("error");
			}else{
				a=sz[n][0];
				b=sz[n][1];
				c=sz[n][2];
				d=sz[n][3];
				e=sz[n][4];
				sz[n][0]=sz[m][0];
				sz[n][1]=sz[m][1];
				sz[n][2]=sz[m][2];
				sz[n][3]=sz[m][3];
				sz[n][4]=sz[m][4];
				sz[m][0]=a;
				sz[m][1]=b;
				sz[m][2]=c;
				sz[m][3]=d;
				sz[m][4]=e;
	for(row=0;row<ROW;row++){
		printf("\n");
		for(col=0;col<COL-1;col++){
			printf("%d",sz[row][col]);
		printf(" ");}
		printf("%d",sz[row][4]);
			}}
return 0;
}