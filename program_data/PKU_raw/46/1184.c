int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int sz[100][100];
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int n,time=0;
	i=0,j=0;
	for(n=0;;n++){
		for(;j<col-n;j++){
			printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		j--;
		i++;
		for(;i<row-n;i++){
			printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		i--;
		j--;
		for(;j>n-1;j--){
			printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		j++;
		i--;
		for(;i>n;i--){
			printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		i++;
		j++;
	}
	return 0;
}

