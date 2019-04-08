int main()
{
	int i,n[100][100],col,row,COL,ROW;
	scanf("%d %d",&ROW,&COL);
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			scanf("%d",&n[row][col]);
		}
	}
	for(i=0;i<COL+ROW-1;i++){
		if(i<COL){
			col=i;
			row=0;
			while(col>=0&&row<ROW){
				printf("%d\n",n[row][col]);
				col-=1;
				row+=1;
			}
		}
		else if(i>=COL){
			col=COL-1;
			row=i-COL+1;
			while(col>=0&&row<ROW){
				printf("%d\n",n[row][col]);
				col-=1;
				row+=1;
			}
		}
	}
	return 0;
}
