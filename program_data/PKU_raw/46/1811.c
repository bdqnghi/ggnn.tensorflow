

int main(int argc, char* argv[])
{
	int row,col,i,h,num,total;
	int sz[100][100];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(h=0;h<col;h++){
			scanf("%d",&sz[i][h]);
		}
	}
	num=0;
	h=0;
	total=row*col;
	while(1){
		for(i=h;i<col-h;i++){
			printf("%d\n",sz[h][i]);
			num++;
			if(num==total){
				return 0;
			}
		}
		for(i=h+1;i<row-h;i++){
			printf("%d\n",sz[i][col-1-h]);
			num++;
			if(num==total){
				return 0;
			}
		}
		for(i=h+1;i<col-h;i++){
			printf("%d\n",sz[row-1-h][col-1-i]);	
			num++;
			if(num==total){
				return 0;
			}
		}
		for(i=h+1;i<row-h-1;i++){
			printf("%d\n",sz[row-1-i][h]);	
			num++;
			if(num==total){
				return 0;
			}
		}
		h++;
	}
}