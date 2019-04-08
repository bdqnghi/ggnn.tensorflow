int check(int a[5][5],int n,int m);

int check(int a[5][5],int n,int m){
	int row,col,indin=0,indim=0,indi;
	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			if((a[row][col])==n){
				indin=1;
			}
			if((a[row][col])==m){
				indim=1;
			}
		}
	}
	indi=indin*indim;
	return indi;
}


int main()
{
	int square[5][5],n,m;
	int row,col;
	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			scanf("%d",&square[row][col]);
		}
	}
	scanf("%d%d",&n,&m);
	int result,temp;
	result=check(square,n,m);
	if(result==0||n>4||m>4)printf("error");
	else{
		for(col=0;col<5;col++){
			temp=square[n][col];
			square[n][col]=square[m][col];
			square[m][col]=temp;
		}
	for(row=0;row<5;row++){
		printf("\n%d",square[row][0]);
		for(col=1;col<5;col++)printf(" %d",square[row][col]);
	}
	}

	return 0;
}
