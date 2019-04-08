int main(){
    int i,j,row,col,rowmin,rowmax,colmin,colmax;
    int a[100][100];
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			scanf("%d",&a[i][j]);
			}
		}
	rowmax=row;
	rowmin=1;
	colmax=col;
	colmin=1;
	while(1){
		if(rowmax<rowmin||colmax<colmin){break;}
		else if(rowmax==rowmin){for(j=colmin;j<=colmax;j++){printf("%d\n",a[rowmin][j]);}}
		else if(colmax==colmin){for(i=rowmin;i<=rowmax;i++){printf("%d\n",a[i][colmin]);}}
		else{
			for(j=colmin;j<=colmax;j++){printf("%d\n",a[rowmin][j]);}
			for(i=rowmin+1;i<=rowmax;i++){printf("%d\n",a[i][colmax]);}
			for(j=colmax-1;j>=colmin;j--){printf("%d\n",a[rowmax][j]);}
			for(i=rowmax-1;i>rowmin;i--){printf("%d\n",a[i][colmin]);}
			}
		rowmax-=1;
	    rowmin+=1;
	    colmax-=1;
	    colmin+=1;
		}
	return 0;
}
