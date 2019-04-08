
int exch(int a[5][5],int rowa,int rowb){
	if(rowa<0||rowa>4||rowb<0||rowb>4)return 0;
	else{
		int col;
		for(col=0;col<5;col++){
			int temp;
			temp=a[rowa][col];
			a[rowa][col]=a[rowb][col];
			a[rowb][col]=temp;
		}
		return 1;
	}
}

int main()
{
	int a[5][5],rowa,rowb;
	int row,col;
	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			scanf("%d",&a[row][col]);
		}
	}
	scanf("%d%d",&rowa,&rowb);
	switch(exch(a,rowa,rowb)){
		case 0: {
			printf("error");
			break;
		}
		case 1:{
			for(row=0;row<5;row++){
				printf("\n%d",a[row][0]);
				for(col=1;col<5;col++){
					printf(" %d",a[row][col]);
				}
			}
		}
	}
	return 0;
}
