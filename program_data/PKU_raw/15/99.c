int main(){
	int n,i,j,a[100][100],i1,i2,j1,j2,p;
	scanf ("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	p=1;
	for(i=0;i<n&&p;i++)
		for(j=0;j<n&&p;j++)
			if(a[i][j]==0){i1=i;j1=j;p=0;}
	p=1;
	for(i=n-1;i>=0&&p;i--)
		for(j=n-1;j>=0&&p;j--)
			if(a[i][j]==0){i2=i;j2=j;p=0;}
	printf("%d\n",(i2-i1-1)*(j2-j1-1));
	return 0;
}