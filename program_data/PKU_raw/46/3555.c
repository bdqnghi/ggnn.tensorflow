int main()
{
	int row,col,m,n,i,b,c;
	int a[100][100];
	scanf("%d%d",&row,&col);
	for(m=0;m<row;m++){
		for(n=0;n<col;n++){
			scanf("%d",&a[m][n]);
		}
	}

	int p[4]={0,1,0,-1},q[4]={1,0,-1,0};
	
	for(i=0,c=p[0],b=q[0],m=0,n=0;i<row*col;m=m+c,n=n+b,i++){
		printf("%d\n",a[m][n]);
		if(c==p[0]&&b==q[0]&&m+n==col-1){
			c=p[1];
			b=q[1];
		}
		else if(c==p[1]&&b==q[1]&&m-n==row-col){
			c=p[2];
			b=q[2];
		}
		else if(c==p[2]&&b==q[2]&&m+n==row-1){
			c=p[3];
			b=q[3];
		}
		else if(c==p[3]&&b==q[3]&&m==n+1){
			c=p[0];
			b=q[0];
		}
	}
	return 0;
}