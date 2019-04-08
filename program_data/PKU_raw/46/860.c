
int main(){
	int i,j,t,row,col;
	int a[100][100];
	
	scanf("%d%d",&row,&col);
	if(row>=col){
		t=col/2;
	}
	else{
		t=row/2;
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	int rmax=row-1,rmin=0,cmax=col-1,cmin=0;


//	printf("%d",t);

	for(i=0;i<t;i++){
		for(j=cmin;j<cmax;j++){
			printf("%d\n",a[rmin][j]);
		}
		for(j=rmin;j<rmax;j++){
			printf("%d\n",a[j][cmax]);
		}
		for(j=cmax;j>cmin;j--){
			printf("%d\n",a[rmax][j]);
		}
		for(j=rmax;j>rmin;j--){
			printf("%d\n",a[j][cmin]);
		}
		rmax-=1;
		rmin+=1;
		cmax-=1;
		cmin+=1;
	}

	if(col%2!=0&&row>=col){
		for(i=t;i<row-t;i++){
			printf("%d\n",a[i][col/2]);
		}
	}
	else if(row%2!=0&&row<=col){
		for(i=t;i<col-t;i++){
			printf("%d\n",a[row/2][i]);
		}
	}

	return 0;
}