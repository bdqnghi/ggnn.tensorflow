int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int array[100][100];
	for(int rr=0;rr<row;rr++){
		for(int cc=0;cc<col;cc++){
			scanf("%d",&array[rr][cc]);
		}
	}
	

	for(int t=1;t<100;t++){

		int leftc=t-1;
		int rightc=col-t;
		if(leftc<=rightc){
			if(leftc==rightc){
			}
			for(int c=leftc;c<=rightc;c++){
				if(c==0){
					printf("%d",array[0][0]);
				}else{
					printf("\n%d",array[t-1][c]);
				}
				
			}
		}else{
			break;
		}

	

		int upr=t;
		int downr=row-1-t;

		

		if(upr<=downr){
			for(int r=upr;r<=downr;r++){
				printf("\n%d",array[r][col-t]);
			}
		
		}
		
		if(upr-downr>=2){
			break;
		}

		

		if(leftc<=rightc){
			for(int c=rightc;c>=leftc;c--){
				printf("\n%d",array[row-t][c]);	
			}
		}

		if(leftc==rightc){
			break;
		}

		if(upr<=downr){
			for(int r=downr;r>=upr;r--){
				printf("\n%d",array[r][t-1]);
			}
		}
	}
	return 0;
}