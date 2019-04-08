int main(){
	int row,col;
	scanf("%d %d",&row,&col);
	int array[100][100];
    int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d" ,&array[i][j]);
		}
	}
	int n,N;
	int time=0;
	int m1,m2;
	m1=(int)ceil(1.0*row/2);
	m2=(int)ceil(1.0*col/2);
	if(m1<m2){
		N=m1;
	}
	else{
		N=m2;
	}
	for(n=0;n<N;n++){
		for(j=n;j<col-n;j++){
			if(time<row*col){
			printf("%d\n",array[n][j]);
			time++;
			}
		}
		for(i=n+1;i<row-n;i++){
			if(time<row*col){
			printf("%d\n",array[i][col-n-1]);
			time++;
			
			}
		}
		for(j=col-n-2;j>=n;j--){
			if(time<row*col){
			printf("%d\n",array[row-n-1][j]);
			time++;
			
			}
		}
		for(i=row-n-2;i>n;i--){
			if(time<row*col){
			printf("%d\n",array[i][n]);
			time++;
			
			}
		}
	}
	return 0;
}