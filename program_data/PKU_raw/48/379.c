int main()
{
 	int m,n,row,col,i;
 	int sz[11][11],by[11][11];
 	scanf("%d %d",&m,&n);
 	for(row=1;row<=9;row++){
			for(col=1;col<=9;col++){
				sz[row][col]=0;
				by[row][col]=0;
				}
			}
	sz[5][5]=m;
	by[5][5]=m;
	for(i=1;i<=n;i++){
	for(row=1;row<=9;row++){
		for(col=1;col<=9;col++){
			if(sz[row][col]!=0){
				by[row][col]=sz[row][col]+by[row][col];
				by[row-1][col]+=sz[row][col];
				by[row-1][col-1]+=sz[row][col];
				by[row-1][col+1]+=sz[row][col];
				by[row][col-1]+=sz[row][col];
				by[row][col+1]+=sz[row][col];
				by[row+1][col]+=sz[row][col];
				by[row+1][col-1]+=sz[row][col];
				by[row+1][col+1]+=sz[row][col];
				}
			}
		}
	for(row=1;row<=9;row++){
		for(col=1;col<=9;col++){
			sz[row][col]=by[row][col];
			}
		}
    }
    for(row=1;row<=9;row++){
		for(col=1;col<=9;col++){
			if(col!=9) printf("%d ",sz[row][col]);
			else printf("%d\n",sz[row][col]);
			}
		}
 	
    return 0;
}