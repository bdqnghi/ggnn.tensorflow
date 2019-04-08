int main()
{
	int m,n,i,j,h[20][20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&h[i][j]);
		}
	}
	if(h[0][0]>=h[1][0]&&h[0][0]>=h[0][1])
			printf("0 0\n");
	for(j=1;j<n-1;j++){
		if(h[0][j]>=h[0][j-1]&&h[0][j]>=h[1][j]&&h[0][j]>=h[0][j+1])
				printf("0 %d\n",j);
	}
	if(h[0][n-1]>=h[1][n-1]&&h[0][n-1]>=h[0][n-2])
			printf("0 %d\n",n-1);
	for(i=1;i<m-1;i++){
        if(h[i][0]>=h[i-1][0]&&h[i][0]>=h[i+1][0]&&h[i][0]>=h[i][1])
			     	printf("%d 0\n",i);
		for(j=1;j<n-1;j++)
		{
			if(i>0&&j>0&&i<m-1){ 
		        if(h[i][j]>=h[i-1][j]&&h[i][j]>=h[i][j-1]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i][j+1])
			     	printf("%d %d\n",i,j);
			}
		}
		if(h[i][n-1]>=h[i-1][n-1]&&h[i][n-1]>=h[i][n-2]&&h[i][n-1]>=h[i+1][n-1])
			     	printf("%d %d\n",i,n-1);
	}
	if(h[m-1][0]>=h[m-1][1]&&h[m-1][0]>=h[m-2][0])
		printf("%d 0\n",m-1);
	for(j=1;j<n-1;j++){
		if(h[m-1][j]>=h[m-2][j]&&h[m-1][j]>=h[m-1][j-1]&&h[m-1][j]>=h[m-1][j+1])
			     	printf("%d %d\n",m-1,j);
	}
	if(h[m-1][n-1]>=h[m-1][n-2]&&h[m-1][n-1]>=h[m-2][n-1])
		printf("%d %d\n",m-1,n-1);
	return 0;
}
