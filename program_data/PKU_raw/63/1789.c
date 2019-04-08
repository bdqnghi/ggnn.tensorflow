

int main(){
	int x1=0,y1=0,x2=0,y2=0,a[101][101],b[101][101],c[101][101];
	scanf("%d %d\n",&x1,&y1);
	for(int i=1;i<=x1;i++)
		for(int j=1;j<=y1;j++){
			if(j!=y1)
				scanf("%d ",&a[i][j]);
			else
				scanf("%d\n",&a[i][j]);
		}
	scanf("%d %d\n",&x2,&y2);
	for(int i=1;i<=x2;i++)
		for(int j=1;j<=y2;j++){
			if(j!=y2)
				scanf("%d ",&b[i][j]);
			else
				scanf("%d\n",&b[i][j]);
		}
	for(int i=1;i<=x1;i++)
		for(int j=1;j<=y2;j++)
			c[i][j]=0;
	for(int i=1;i<=x1;i++)
		for(int j=1;j<=y2;j++)
			for(int k=1;k<=y1;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
	for(int i=1;i<=x1;i++)
		for(int j=1;j<=y2;j++)
			if(j!=y2)
				printf("%d ",c[i][j]);
			else
				printf("%d\n",c[i][j]);
	return 0;
}