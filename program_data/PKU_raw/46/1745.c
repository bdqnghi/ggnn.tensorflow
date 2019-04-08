int main()
{
	int i,j,det[100][100],ROW,COL,row1,row2,col1,col2,count=0;
	scanf("%d%d",&ROW,&COL);
	for(j=0;j<ROW;j++){
		for(i=0;i<COL;i++){
			scanf("%d",&det[j][i]);
		}
	}
	row1=0;
	row2=ROW-1;
	col1=0;
	col2=COL-1;
	while(row2>=row1&&col2>=col1){
		for(i=col1;i<=col2;i++){
			printf("%d\n",det[row1][i]);
			count++;
		} //verforward
		
		if(count==ROW*COL){
			break;
		}
		for(j=(row1+1);j<=row2;j++){
			printf("%d\n",det[j][col2]);
			count++;
		} //hordown
		
		if(count==ROW*COL){
			break;
		}
		for(i=col2-1;i>=col1;i--){
			printf("%d\n",det[row2][i]);
			count++;
		} //verbackward
		
		if(count==ROW*COL){
			break;
		}
		for(j=(row2-1);j>=(row1+1);j--){
			printf("%d\n",det[j][col1]);
			count++;
		} //horup

		col1++;
		col2--;
		row1++;
		row2--;
	}
	return 0;
}