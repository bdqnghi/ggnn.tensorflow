int main()
{
	int col,row,i,j,n,m,e,cishu,sz[100][100];
	e=0;
	n=0;
	cishu=0;
	scanf("%d%d",&row,&col);
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			scanf("%d",&sz[j][i]);
		}
	}if(row>1&&col>1){
		for(i=0,j=0;;i++,j--){
			if(i==0){m=j;}
	    	printf("%d\n",sz[i][j]);
	     	cishu++;
		    if(cishu==row*col){break;}
	    	if((j==0||i==row-1)&&e==0){
		    	i=-1;
		    	j=m+2;
		    	if(j==col){e=1;}
			}if((j==0||i==row-1)&&e==1){
			    j=col;
			    n++;
			    i=n-1;
			}
		}
	}else{	
		for(j=0;j<row;j++){
			for(i=0;i<col;i++){
				printf("%d\n",sz[j][i]);
			}
		}
	}
	return 0;
}