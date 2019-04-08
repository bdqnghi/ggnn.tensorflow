int main() {
	int i, j,r,c,x,y,a[110][110];
	for (i=0;i<110;i++) for (j=0;j<110;j++) a[i][j]=-1;
	for (scanf("%d%d", &r, &c), i = 1; i <=r; i++)
		for (j = 1; j <= c; j++) scanf("%d", &a[i][j]);
	for (i=j=1,x=0,y=1;a[i][j]!=-1;i+=x,j+=y){
		printf("%d\n",a[i][j]);
		a[i][j]=-1;
		if (a[i+x][j+y]==-1){
			r = y;
			y= -x;
			x=r;
		}
	}
}