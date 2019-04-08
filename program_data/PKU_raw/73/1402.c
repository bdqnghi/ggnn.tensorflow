int main()
{
    int sz[ROW][COL];
    int i,row,col,max,min,nmax,nmin,num=0;
    for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			scanf("%d",&sz[row][col]);
			}
		}
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			if(col==0){
				max=sz[row][col];
				nmax=0;
				}
			else{
				if(sz[row][col]>max){
					max=sz[row][col];
					nmax=col;
					}
				}
			}
		for(i=0;i<ROW;i++){
			if(i==0){
				min=sz[i][nmax];
				nmin=0;
				}
			else{
				if(sz[i][nmax]<min){
					min=sz[i][nmax];
					nmin=i;
					}
				}
			}
		if(max==min){
			printf("%d %d %d",nmin+1,nmax+1,sz[nmin][nmax]);
			num=num+1;
			}
		}
	if(num==0) printf("not found");
    
    return 0;
}