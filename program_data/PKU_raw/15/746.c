int main(){
	int n,a[100][100],row,col,ROW1,COL1,ROW2,COL2,sum;
		scanf("%d",&n);
		for(row=0;row<n;row++){
			for(col=0;col<n;col++){
				scanf("%d",&a[row][col]);
			}
		}

	int flag = 0;
	for(row=0;row<n&&!flag;row++){
			for(col=0;col<n&&!flag;col++){
				if(a[row][col]==0){
				ROW1=row;
				COL1=col;
				flag = 1;
					break;
				} 
			}
		}
 flag = 0;
for(row=n-1;row>=0&&!flag;row--){
			for(col=n-1;col>=0;col--){
				if(a[row][col]==0){
					ROW2=row;
					COL2=col;
	flag = 1;
					break;
				}
			}
		}
sum=(ROW2-ROW1-1)*(COL2-COL1-1);

printf("%d\n",sum);


	return 0;
}