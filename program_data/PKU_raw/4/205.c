
int main()
{
	int row,col;
	scanf("%d%d",&row,&col);
	int i,j;
	int sz[101][101];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);             //????%d?????????//
		}
	}

	if(row>col){
    	int x;
	    for(j=0;j<col;j++){
		    for(x=0;x<=j;x++){                       //?x++??k++!!!//
			    printf("%d\n",sz[x][j-x]);
			}
		}
		int y;
		for(i=1;i<=row-col;i++){
			for(y=0;y<col;y++){
				printf("%d\n",sz[i+y][col-y-1]);
			}
		}
		int w;
		for(i=row-col+1;i<row;i++){
			for(w=0;w<col-1;w++){				
				printf("%d\n",sz[i+w][col-w-1]);
				if(i+w==row-1){
					break;
				}
			}
		}
	}else{
		int z;
		for(j=0;j<row;j++){
			for(z=0;z<=j;z++){
				printf("%d\n",sz[z][j-z]);
			}
		}
		int n;
		for(j=row;j<col;j++){
			for(n=0;n<row;n++){
				printf("%d\n",sz[n][j-n]);
			}
		}
		int m;
		for(i=1;i<row;i++){
			for(m=0;m<row-1;m++){
				printf("%d\n",sz[i+m][col-m-1]);
				if(i+m==row-1){
					break;
				}
			}
		}
	}

	return 0;
}

