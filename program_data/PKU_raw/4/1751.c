int main()
{
	int sz[100][100];
	int row,col;
	scanf("%d %d",&row,&col);
	int r,c;
	for(r=0;r<row;r++){
		for(c=0;c<col;c++){
			scanf("%d",&sz[r][c]);
		}
	}
	int k;
	int first=1;
	int min=row-1;
	if(col<min+1){
		min=col-1;
	}

	for(k=0;k<=min;k++){
		for(r=0;r<=k;r++){
	     	if(first==1){
		    	printf("%d",sz[r][k-r]);
				first=0;
			}else{
				printf("\n%d",sz[r][k-r]);
			}
		}
	}


	if(row>col){
		for(k=1;k<=row-col;k++){
			for(r=k,c=col-1;c>=0&&r<row;c--,r++){
				printf("\n%d",sz[r][c]);
			}
		}
	}
	
	if(row<col){
		for(k=1;k<=col-row;k++){
			for(c=row-1+k,r=0;r<=row-1;c--,r++){
				printf("\n%d",sz[r][c]);
			}
		}
	}

	for(k=min+1;k>=1;k--){
		for(r=row-k+1,c=col-1;r<row;r++,c--){
			printf("\n%d",sz[r][c]);
		}
	}
			

				



	return 0;
}
