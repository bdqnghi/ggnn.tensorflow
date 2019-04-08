
int SwapRow(int array[5][5],int row_n,int row_m)
{
	int col,a;
	if(row_n>=0&&row_n<5&&row_m>=0&&row_m<5){
		for(col=0;col<5;col++){
			a=array[row_n][col];
			array[row_n][col]=array[row_m][col];
			array[row_m][col]=a;
		}
		return 1;
	}
	else
		return 0;
}

int main(int argc, char* argv[])
{
	int array[5][5],n,m,row,col;
	for(row=0;row<5;row++){
		for(col=0;col<5;col++)
			scanf("%d",&array[row][col]);
	}
	scanf("%d %d",&n,&m);
	if(0 == SwapRow(array,n,m))
		printf("error");
	else{
		for(row=0;row<5;row++){
			for(col=0;col<5;col++){
				if(col==4)
					printf("%d\n", array[row][col]);
				else
					printf("%d ", array [row][col]);
			}
		}
	}
	return 0;
}
