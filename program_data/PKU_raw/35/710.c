int main()
{
	int row,col,a[8][8];
	int i,j,K,num=0;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++) scanf("%d",&a[i][j]);
	}
	for(i=0;i<row;i++){
		int max=a[i][0],lie=0,min;
		for(j=0;j<col;j++){
			if(max<a[i][j]){
				max=a[i][j],lie=j;
			}
		}
		min=max;
		for(K=0;K<row;K++){
			if(min>a[K][lie]) min=a[K][lie];
		}
		if(min==max) printf("%d+%d",i,lie),num++;
	}
	if(num==0) printf("No");
	return 0;
}
		
