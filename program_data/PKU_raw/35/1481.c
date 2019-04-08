int main()
{
	int sz[8][8];
	int m,n,row,col,a=0,b,c,d=0;
	scanf("%d,%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	row=0;
	while(row<m){
		a=sz[row][0];
		b=0;
		for(col=1;col<n;col++){
			if(a<sz[row][col]){
				a=sz[row][col];
				b=col;
			}
		}
		for(col=b,row=1;row<m;row++){
			c=sz[0][col];
			if(c>sz[row][col]){
				c=sz[row][col];
				d=row;
			}
		}
		if(a==c){
			printf("%d""+""%d",d,b);
			break;
		}else{
			row++;
			a=0;
		}
	}
	if(a==0){
		printf("No");
	}
	return 0;
}
