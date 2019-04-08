int main()
{
int sz[255][255];
int m,n,a,i,j,row,col;
a=0;
scanf("%d %d",&m,&n);
for(row=0;row<m;row++){
	for(col=0;col<n;col++){
		scanf("%d",&sz[row][col]);
	}
}
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(sz[i][j]-sz[i][j+1]>=0&&sz[i][j]-sz[i][j-1]>=0&&sz[i][j]-sz[i-1][j]>=0&&sz[i][j]-sz[i+1][j]>=0)
		printf("%d %d\n",i,j);
	}
}


return 0;
}