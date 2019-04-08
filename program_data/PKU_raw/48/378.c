int main()
{
	int m,n,i,j,k,x,y;
	scanf("%d %d",&m,&n);
	int u[10][10]={0};
	int q[10][10]={0};
	u[4][4]=m;
	q[4][4]=m;
	for(k=1;k<=n;k++){
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(q[i][j]!=0)
			{
				u[i][j]+=q[i][j];
				u[i-1][j-1]+=q[i][j];
				u[i-1][j]+=q[i][j];
				u[i-1][j+1]+=q[i][j];
				u[i][j-1]+=q[i][j];
				u[i][j+1]+=q[i][j];
				u[i+1][j-1]+=q[i][j];
				u[i+1][j]+=q[i][j];
				u[i+1][j+1]+=q[i][j];
			}
		}
	}
	for(x=0;x<9;x++){
				for(y=0;y<9;y++){
					q[x][y]=u[x][y];
				}
			}
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(j==8)
			{
				printf("%d\n",u[i][j]);
			}
			else
			{
			printf("%d ",u[i][j]);
			}
		}
	}
	return 0;
}