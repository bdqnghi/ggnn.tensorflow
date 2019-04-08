int main()
{   int a[100][100];
	int row,col,i,j,t1,t2=0;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
    for(t1=0;t1<row;t1++){
		if(t2==row*col){
			break;
		}
		for(j=t1;j<col-t1;j++){
			printf("%d\n",a[t1][j]);
			t2++;
		}
		if(t2==row*col){
			break;
		}
		for(i=t1+1;i<row-t1;i++){
			printf("%d\n",a[i][col-t1-1]);
			t2++;
		}
		if(t2==row*col){
			break;
		}
		for(j=col-t1-2;j>=t1;j--){
			printf("%d\n",a[row-t1-1][j]);
		    t2++;
		}
		if(t2==row*col){
			break;
		}
		for(i=row-t1-2;i>=t1+1;i--){
			printf("%d\n",a[i][t1]);
		    t2++;
		}
		if(t2==row*col){
			break;
		}
	}
	return 0;
}