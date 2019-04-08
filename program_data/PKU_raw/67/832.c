int main()
{
	int sz[10000][2];
	double x,y;
	int i,j,row;
	scanf("%d",&row);
	for(i=0;i<row;i++)
		for(j=0;j<2;j++)
			scanf("%d",&sz[i][j]);
	x=(double)sz[0][1]/(double)sz[0][0];
	for(i=1;i<row;i++){
		y=(double)sz[i][1]/(double)sz[i][0];
		if(y-x>0.05){
			printf("better\n");
		}else if(x-y>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}